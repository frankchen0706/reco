

#if !defined(AFX_UNKNOWWORD_H__84088A03_CF08_45A8_9AE0_086BE8F60566__INCLUDED_)
#define AFX_UNKNOWWORD_H__84088A03_CF08_45A8_9AE0_086BE8F60566__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "..\\Tag\\span.h"//CSpan class
#include "..\\Segment\\SegGraph.h"//CSpan class

class CUnknowWord  
{
public:
	//Judge whether the name is a given name
	bool IsGivenName(char *sName);
	bool Configure(char *sConfigFile,enum TAG_TYPE type=TT_PERSON);
	bool Recognition(PWORD_RESULT pWordSegResult, CDynamicArray &graphOptimum,CSegGraph &graphSeg,CDictionary &dictCore);
	//Unknown word recognition
	//pWordSegResult:word Segmentation result;graphOptimum: The optimized segmentation graph
	//graphSeg: The original segmentation graph
	//type: Unknown words type (including person,place,transliterion and so on)
	CUnknowWord();
	virtual ~CUnknowWord();
	CDictionary m_dict;//Unknown dictionary
private:
	CSpan m_roleTag;//Role tagging
	int m_nPOS;//The POS of such a category
	char m_sUnknownFlags[10];
protected:
};

#endif // !defined(AFX_UNKNOWWORD_H__84088A03_CF08_45A8_9AE0_086BE8F60566__INCLUDED_)
