

#if !defined(AFX_SEGMENT_H__76DAE34D_434F_4989_8F00_64F17B5E19ED__INCLUDED_)
#define AFX_SEGMENT_H__76DAE34D_434F_4989_8F00_64F17B5E19ED__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "DynamicArray.h"
#include "..\\Utility\\Dictionary.h"
#include "SegGraph.h"//The segmentation graph
#define MAX_WORDS 650
#define MAX_SEGMENT_NUM 10
class CSegment  
{
public:
	bool BiOptimumSegment(unsigned int nResultCount,double dSmoothingPara, CDictionary &dictBinary, CDictionary &dictCore);
	bool BiSegment(char *sSentence,double dSmoothingPara,CDictionary &dictCore,CDictionary &dictBinary,unsigned int nResultCount);
	bool GetLastWord(PWORD_RESULT pItem, char *sWordRet);
	int GetResultCount(PWORD_RESULT pItem);
	bool OptimumSegmet(int nResultCount);
	//Word Segmentation based on optimum segmentation graph
	//After unknown word recognition
	bool Segment(char *sSentence,CDictionary &dictCore,int nResultCount=10);
	CSegment();
	virtual ~CSegment();
	PWORD_RESULT *m_pWordSeg;
	int m_nSegmentCount;
	//The segmentation result
	CDynamicArray m_graphOptimum;//The optimumized segmentation graph
	CSegGraph m_graphSeg;//The segmentation graph
protected:
	bool BiPath2UniPath(int *npPath);
	bool BiGraphGenerate(CDynamicArray &aWord,CDynamicArray &aBinaryWordNet,double dSmoothingPara,CDictionary &DictBinary,CDictionary &DictCore);
	//CDynamicArray &aWord: the words array
	//CDynamicArray &aBinaryWordNet:the net between words
	//double dSmoothingPara: the parameter of data smoothing
	//CDictionary &DictBinary: the binary dictionary
	//CDictionary &DictCore: the Core dictionary
	bool IsYearTime(char *sNum);
	bool GenerateWord(int ** nSegRoute, int nIndex);
private:
	int *m_npWordPosMapTable;//Record the position map of possible words
	int m_nWordCount;//Record the End position of possible words
};
#endif // !defined(AFX_SEGMENT_H__76DAE34D_434F_4989_8F00_64F17B5E19ED__INCLUDED_)
