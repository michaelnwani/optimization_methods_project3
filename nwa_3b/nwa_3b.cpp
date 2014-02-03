// nwa_3b.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "grid.h"
#include "quickSort.h"
#include "d_matrix.h"
#include "d_except.h"
#include "findMatches.h"
#include "dictionary.h"
#include "binarySearch.h"
#include "testSearch.h"
#include "bubbleSort.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Dictionary dictionary;
	Grid grid("input15");

	findMatches(dictionary, grid);

	//quickSort is orders of magnitude faster than bubble sort.


	return 0;
}

