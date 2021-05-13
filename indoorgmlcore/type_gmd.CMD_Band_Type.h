#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Band_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Band_Type

#include "type_gmd.CMD_RangeDimension_Type.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CMD_Band_Type : public ::indoorgmlcore::gmd::CMD_RangeDimension_Type
{
public:
	indoorgmlcore_EXPORT CMD_Band_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMD_Band_Type(CMD_Band_Type const& init);
	void operator=(CMD_Band_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CMD_Band_Type); }
	MemberElement<gco::CReal_PropertyType, _altova_mi_gmd_altova_CMD_Band_Type_altova_maxValue> maxValue;
	struct maxValue { typedef Iterator<gco::CReal_PropertyType> iterator; };
	MemberElement<gco::CReal_PropertyType, _altova_mi_gmd_altova_CMD_Band_Type_altova_minValue> minValue;
	struct minValue { typedef Iterator<gco::CReal_PropertyType> iterator; };
	MemberElement<gco::CUomLength_PropertyType, _altova_mi_gmd_altova_CMD_Band_Type_altova_units> units;
	struct units { typedef Iterator<gco::CUomLength_PropertyType> iterator; };
	MemberElement<gco::CReal_PropertyType, _altova_mi_gmd_altova_CMD_Band_Type_altova_peakResponse> peakResponse;
	struct peakResponse { typedef Iterator<gco::CReal_PropertyType> iterator; };
	MemberElement<gco::CInteger_PropertyType, _altova_mi_gmd_altova_CMD_Band_Type_altova_bitsPerValue> bitsPerValue;
	struct bitsPerValue { typedef Iterator<gco::CInteger_PropertyType> iterator; };
	MemberElement<gco::CInteger_PropertyType, _altova_mi_gmd_altova_CMD_Band_Type_altova_toneGradation> toneGradation;
	struct toneGradation { typedef Iterator<gco::CInteger_PropertyType> iterator; };
	MemberElement<gco::CReal_PropertyType, _altova_mi_gmd_altova_CMD_Band_Type_altova_scaleFactor> scaleFactor;
	struct scaleFactor { typedef Iterator<gco::CReal_PropertyType> iterator; };
	MemberElement<gco::CReal_PropertyType, _altova_mi_gmd_altova_CMD_Band_Type_altova_offset> offset;
	struct offset { typedef Iterator<gco::CReal_PropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Band_Type
