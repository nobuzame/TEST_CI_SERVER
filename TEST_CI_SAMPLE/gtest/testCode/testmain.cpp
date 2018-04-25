/* ********************************************************************
*
*	file name	：testmain.cpp
*	author		：
*	date		：
*	Abstruct	：テストメイン
*
********************************************************************** */

//-------------------------------------------------------------
// Include File
//-------------------------------------------------------------
#include <stdio.h>
#include "../gmock_fused-src/gtest/gtest.h"

#ifdef __linux__ 
#else
 /* Windows Debug動作時のメモリリーク検出用定義 */
#include <stdlib.h> 
#include <crtdbg.h>  

 /* Windows C++ でnew 演算子を使用してメモリを割り当てている場合のメモリリーク検出用定義 */
#ifdef _DEBUG 
#ifndef DBG_NEW 
#define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ ) 
#define new DBG_NEW 
#endif 
#endif  // _DEBUG 

#endif

 //-------------------------------------------------------------
 // using namespase
 //-------------------------------------------------------------
using namespace std;

//-------------------------------------------------------------
// Static Variable
//-------------------------------------------------------------

/* nothing */

//-------------------------------------------------------------
// Static Prototype Func
//-------------------------------------------------------------

/* nothing */

//-------------------------------------------------------------
// Global Func
//-------------------------------------------------------------

int main(int argc, char* argv[])
{
#ifdef __linux__ 
#else
	/* メモリリークの検出設定 */
	_CrtSetDbgFlag ( _CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF ); 
	_CrtSetReportMode( _CRT_ERROR, _CRTDBG_MODE_DEBUG );  
#endif		//__linux__


	int nRet;

	// GoogleTestを初期化
	testing::InitGoogleTest( &argc, argv );

	// 全てのテストを実施
	nRet = RUN_ALL_TESTS();

	//#ifdef __linux__ 
	//#else
	//	_CrtDumpMemoryLeaks();  
	//#endif		//__linux__


	// コンソールが閉じないように入力を待つ
	system( "pause" );

	return 0;
}


