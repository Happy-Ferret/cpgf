#include "testmetagen.h"


namespace {


void testSimpleData(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.SimpleData());
	QDO(a.n = 38);
	QDO(a.s = "abc");
//	QDO(a.ws = "wide");
	
	QNEWOBJ(b, mtest.SimpleData(a));
	QASSERT(b.n == 38);
	QASSERT(b.s == "abc");
//	QASSERT(b.ws == "wide");
}


#define CASE testSimpleData
#include "do_testcase.h"


void testSimpleObject_Data(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.SimpleObject());
	QDO(a.data.n = 38);
	QDO(a.data.s = "abc");
	QDO(a.data.atom.value = 58);
	QASSERT(a.checkData(38));
	QASSERT(a.checkData("abc"));
	QASSERT(a.checkAtom(58));
}


#define CASE testSimpleObject_Data
#include "do_testcase.h"



void testSimpleObject_GetData(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.SimpleObject());
	QDO(a.getData().n = 78);
	QDO(a.getData().s = "def");
	QDO(a.getData().atom.value = 98);
	QASSERT(a.checkData(78));
	QASSERT(a.checkData("def"));
	QASSERT(a.checkAtom(98));
}

#define CASE testSimpleObject_GetData
#include "do_testcase.h"


void testSimpleObject_SetData(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.SimpleObject());
	QNEWOBJ(d, mtest.SimpleData(1999, "what"));
	QDO(d.atom.value = 108);
	QDO(a.setData(d));
	QASSERT(a.checkData(1999));
	QASSERT(a.checkData("what"));
	QASSERT(a.checkAtom(108));
}


#define CASE testSimpleObject_SetData
#include "do_testcase.h"




}