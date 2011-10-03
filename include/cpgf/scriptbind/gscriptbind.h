#ifndef __GSCRIPTBIND_H
#define __GSCRIPTBIND_H


#include "cpgf/scriptbind/gscriptbindapi.h"

#include "cpgf/gmetaapiutil.h"

#include <string>
#include <algorithm>


namespace cpgf {

class GScriptException : public std::runtime_error {
private:
	typedef std::runtime_error super;
	
public:
	GScriptException(const std::string & message) : super(message) {
	}

	int getErrorCode() const {
		return 0;
	}
};


class GScriptConfig
{
private:
	enum {
		scAccessStaticMethodViaInstance = 1 << 0,
		scAccessEnumTypeViaInstance = 1 << 1,
		scAccessEnumValueViaInstance = 1 << 2,
		scAccessClassViaInstance = 1 << 3
	};

	enum {
		DefaultFlags
			= scAccessStaticMethodViaInstance
				| scAccessEnumTypeViaInstance
				| scAccessEnumValueViaInstance
				| scAccessClassViaInstance
	};

public:
	GScriptConfig() : flags(DefaultFlags) {
	}

	GScriptConfig(const GScriptConfig & other) : flags(other.flags) {
	}

	GScriptConfig & operator = (const GScriptConfig & other) {
		this->flags = other.flags;

		return *this;
	}

	void setAccessStaticMethodViaInstance(bool set) {
		this->setFlag(scAccessStaticMethodViaInstance, set);
	}

	bool allowAccessStaticMethodViaInstance() const {
		return this->hasFlag(scAccessStaticMethodViaInstance);
	}

	void setAccessEnumTypeViaInstance(bool set) {
		this->setFlag(scAccessEnumTypeViaInstance, set);
	}

	bool allowAccessEnumTypeViaInstance() const {
		return this->hasFlag(scAccessEnumTypeViaInstance);
	}

	void setAccessEnumValueViaInstance(bool set) {
		this->setFlag(scAccessEnumValueViaInstance, set);
	}

	bool allowAccessEnumValueViaInstance() const {
		return this->hasFlag(scAccessEnumValueViaInstance);
	}

	void setAccessClassViaInstance(bool set) {
		this->setFlag(scAccessClassViaInstance, set);
	}

	bool allowAccessClassViaInstance() const {
		return this->hasFlag(scAccessClassViaInstance);
	}

private:
	bool hasFlag(unsigned int flag) const {
		return (this->flags & flag) != 0;
	}

	void setFlag(unsigned int flag, bool set) {
		if(set) {
			this->setFlag(flag);
		}
		else {
			this->clearFlag(flag);
		}
	}

	void setFlag(unsigned int flag) {
		this->flags |= flag;
	}

	void clearFlag(unsigned int flag) {
		this->flags &= ~flag;
	}

private:
	unsigned int flags;
};


class GScriptNameData
{
public:
	GScriptNameData();
	virtual ~GScriptNameData();

	void retain();
	void release();

	virtual const char * getName(const char * candidate) const;
	virtual bool isAvailable() const;

private:
	int referenceCount;
};

class GScriptName
{
public:
	GScriptName(const char * name);
	GScriptName(const char * name, GScriptNameData * data);
	GScriptName(const GScriptName & other);
	~GScriptName();

	GScriptName & operator = (GScriptName other);

	void swap(GScriptName & other);

	const char * getName() const;

	GScriptNameData * getData() const;
	bool hasData() const;

private:
	const char * name;
	GScriptNameData * data;
};


class GScriptObject
{
public:
	GScriptObject(const GScriptConfig & config);
	virtual ~GScriptObject();

	const GScriptConfig & getConfig() const;

	GScriptObject * getOwner() const;

	bool isGlobal() const;

public:	
	virtual bool cacheName(GScriptName * name) = 0;

	virtual GScriptDataType getType(const GScriptName & name) = 0;

	virtual void bindClass(const GScriptName & name, IMetaClass * metaClass) = 0;
	virtual void bindEnum(const GScriptName & name, IMetaEnum * metaEnum) = 0;

	virtual GScriptObject * createScriptObject(const GScriptName & name) = 0;
	
	virtual GVariant callIndirectly(const GScriptName & name, GVariant const * const * params, size_t paramCount) = 0;
	virtual GVariant call(const GScriptName & name, const GVariant * params, size_t paramCount) = 0;

	virtual void setFundamental(const GScriptName & name, const GVariant & value) = 0;
	virtual void setString(const GScriptName & stringName, const char * s) = 0;
	virtual void setObject(const GScriptName & objectName, void * instance, IMetaClass * type, bool transferOwnership) = 0;
	virtual void setMethod(const GScriptName & name, void * instance, IMetaMethod * method) = 0;
	
	virtual GVariant getFundamental(const GScriptName & name) = 0;
	virtual std::string getString(const GScriptName & stringName) = 0;
	
	virtual void * getObject(const GScriptName & objectName) = 0;
	virtual IMetaClass * getObjectType(const GScriptName & objectName) = 0;
	virtual IMetaClass * getClass(const GScriptName & className) = 0;
	
	virtual IMetaMethod * getMethod(const GScriptName & methodName) = 0;
	virtual IMetaEnum * getEnum(const GScriptName & enumName) = 0;
	
	virtual void assignValue(const GScriptName & fromName, const GScriptName & toName) = 0;
	virtual bool valueIsNull(const GScriptName & name) = 0;
	virtual void nullifyValue(const GScriptName & name) = 0;

protected:
	const char * getName() const;

private:
	GScriptObject(const GScriptObject &);
	GScriptObject & operator = (const GScriptObject &);

protected:
	GScriptConfig config;
	GScriptObject * owner;
	std::string name;
};



} // namespace cpgf





#endif
