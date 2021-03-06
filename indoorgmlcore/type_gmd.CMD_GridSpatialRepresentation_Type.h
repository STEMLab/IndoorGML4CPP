#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_GridSpatialRepresentation_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_GridSpatialRepresentation_Type

#include "type_gmd.CAbstractMD_SpatialRepresentation_Type.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CMD_GridSpatialRepresentation_Type : public ::indoorgmlcore::gmd::CAbstractMD_SpatialRepresentation_Type
{
public:
	indoorgmlcore_EXPORT CMD_GridSpatialRepresentation_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMD_GridSpatialRepresentation_Type(CMD_GridSpatialRepresentation_Type const& init);
	void operator=(CMD_GridSpatialRepresentation_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CMD_GridSpatialRepresentation_Type); }
	MemberElement<gco::CInteger_PropertyType, _altova_mi_gmd_altova_CMD_GridSpatialRepresentation_Type_altova_numberOfDimensions> numberOfDimensions;
	struct numberOfDimensions { typedef Iterator<gco::CInteger_PropertyType> iterator; };
	MemberElement<gmd::CMD_Dimension_PropertyType, _altova_mi_gmd_altova_CMD_GridSpatialRepresentation_Type_altova_axisDimensionProperties> axisDimensionProperties;
	struct axisDimensionProperties { typedef Iterator<gmd::CMD_Dimension_PropertyType> iterator; };
	MemberElement<gmd::CMD_CellGeometryCode_PropertyType, _altova_mi_gmd_altova_CMD_GridSpatialRepresentation_Type_altova_cellGeometry> cellGeometry;
	struct cellGeometry { typedef Iterator<gmd::CMD_CellGeometryCode_PropertyType> iterator; };
	MemberElement<gco::CBoolean_PropertyType, _altova_mi_gmd_altova_CMD_GridSpatialRepresentation_Type_altova_transformationParameterAvailability> transformationParameterAvailability;
	struct transformationParameterAvailability { typedef Iterator<gco::CBoolean_PropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_GridSpatialRepresentation_Type
