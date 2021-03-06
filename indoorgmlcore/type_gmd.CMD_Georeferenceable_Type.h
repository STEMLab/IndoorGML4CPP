#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Georeferenceable_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Georeferenceable_Type

#include "type_gmd.CMD_GridSpatialRepresentation_Type.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CMD_Georeferenceable_Type : public ::indoorgmlcore::gmd::CMD_GridSpatialRepresentation_Type
{
public:
	indoorgmlcore_EXPORT CMD_Georeferenceable_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMD_Georeferenceable_Type(CMD_Georeferenceable_Type const& init);
	void operator=(CMD_Georeferenceable_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CMD_Georeferenceable_Type); }
	MemberElement<gco::CBoolean_PropertyType, _altova_mi_gmd_altova_CMD_Georeferenceable_Type_altova_controlPointAvailability> controlPointAvailability;
	struct controlPointAvailability { typedef Iterator<gco::CBoolean_PropertyType> iterator; };
	MemberElement<gco::CBoolean_PropertyType, _altova_mi_gmd_altova_CMD_Georeferenceable_Type_altova_orientationParameterAvailability> orientationParameterAvailability;
	struct orientationParameterAvailability { typedef Iterator<gco::CBoolean_PropertyType> iterator; };
	MemberElement<gco::CCharacterString_PropertyType, _altova_mi_gmd_altova_CMD_Georeferenceable_Type_altova_orientationParameterDescription> orientationParameterDescription;
	struct orientationParameterDescription { typedef Iterator<gco::CCharacterString_PropertyType> iterator; };
	MemberElement<gco::CRecord_PropertyType, _altova_mi_gmd_altova_CMD_Georeferenceable_Type_altova_georeferencedParameters> georeferencedParameters;
	struct georeferencedParameters { typedef Iterator<gco::CRecord_PropertyType> iterator; };
	MemberElement<gmd::CCI_Citation_PropertyType, _altova_mi_gmd_altova_CMD_Georeferenceable_Type_altova_parameterCitation> parameterCitation;
	struct parameterCitation { typedef Iterator<gmd::CCI_Citation_PropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Georeferenceable_Type
