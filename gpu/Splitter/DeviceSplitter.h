/*
 * DeviceSplitter.h
 *
 *  Created on: 5 May 2016
 *      Author: Zeyi Wen
 *		@brief: 
 */

#ifndef DEVICESPLITTER_H_
#define DEVICESPLITTER_H_

#include <vector>

#include "../../pureHost/UpdateOps/NodeStat.h"
#include "../../pureHost/UpdateOps/SplitPoint.h"
#include "../../pureHost/BaseClasses/BaseSplitter.h"

using std::vector;


class DeviceSplitter: public BaseSplitter
{
public:
	virtual void FeaFinderAllNode(vector<SplitPoint> &vBest, vector<nodeStat> &rchildStat, vector<nodeStat> &lchildStat);
	virtual void SplitAll(vector<TreeNode*> &splittableNode, const vector<SplitPoint> &vBest, RegTree &tree, int &m_nNumofNode,
				  	  	  const vector<nodeStat> &rchildStat, const vector<nodeStat> &lchildStat, bool bLastLevel);
	virtual void ComputeGD(vector<RegTree> &vTree);
};



#endif /* DEVICESPLITTER_H_ */
