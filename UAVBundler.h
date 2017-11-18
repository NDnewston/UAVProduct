#pragma once
#include"UAVPreProcess.h"

class UAVProcessBundle:public UAV
{
public:
	virtual UAVErr UAVProcessBundleGlobal(std::unique_ptr<UAVProcessFeature> feats_ptr,std::string sfm_dout);

	virtual UAVErr UAVProcessBundleSquence(std::unique_ptr<UAVProcessFeature> feats_ptr,std::string sfm_dout);
};


class UAVProcessBundleGCPs:public UAVProcessBundle
{
public:
	virtual UAVErr UAVProcessBindGCPs(std::string pGcps);

public:
	virtual UAVErr UAVProcessBundleGlobal(std::string dImage,std::string dFeatures,std::string pGPS,
		UAVProcessPOS* pPorc,CoordiListType typeCoordi,UAVCalibParams &cParam,
		std::string sfm_out);
	virtual UAVErr UAVProcessBundleSquence(std::string dImage,std::string dFeatures,std::string pGPS,
		UAVProcessPOS* pPorc,CoordiListType typeCoordi,UAVCalibParams &cParam,
		std::string sfm_out);
}