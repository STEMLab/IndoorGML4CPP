#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CEngineeringCRSType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CEngineeringCRSType

#include "type_gml.CAbstractCRSType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CEngineeringCRSType : public ::indoorgmlcore::gml::CAbstractCRSType
{
public:
	indoorgmlcore_EXPORT CEngineeringCRSType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CEngineeringCRSType(CEngineeringCRSType const& init);
	void operator=(CEngineeringCRSType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CEngineeringCRSType); }
	MemberElement<gml::CAffineCSPropertyType, _altova_mi_gml_altova_CEngineeringCRSType_altova_affineCS> affineCS;
	struct affineCS { typedef Iterator<gml::CAffineCSPropertyType> iterator; };
	MemberElement<gml::CAffineCSPropertyType, _altova_mi_gml_altova_CEngineeringCRSType_altova_usesAffineCS> usesAffineCS;
	struct usesAffineCS { typedef Iterator<gml::CAffineCSPropertyType> iterator; };
	MemberElement<gml::CCartesianCSPropertyType, _altova_mi_gml_altova_CEngineeringCRSType_altova_cartesianCS> cartesianCS;
	struct cartesianCS { typedef Iterator<gml::CCartesianCSPropertyType> iterator; };
	MemberElement<gml::CCartesianCSPropertyType, _altova_mi_gml_altova_CEngineeringCRSType_altova_usesCartesianCS> usesCartesianCS;
	struct usesCartesianCS { typedef Iterator<gml::CCartesianCSPropertyType> iterator; };
	MemberElement<gml::CCylindricalCSPropertyType, _altova_mi_gml_altova_CEngineeringCRSType_altova_cylindricalCS> cylindricalCS;
	struct cylindricalCS { typedef Iterator<gml::CCylindricalCSPropertyType> iterator; };
	MemberElement<gml::CLinearCSPropertyType, _altova_mi_gml_altova_CEngineeringCRSType_altova_linearCS> linearCS;
	struct linearCS { typedef Iterator<gml::CLinearCSPropertyType> iterator; };
	MemberElement<gml::CPolarCSPropertyType, _altova_mi_gml_altova_CEngineeringCRSType_altova_polarCS> polarCS;
	struct polarCS { typedef Iterator<gml::CPolarCSPropertyType> iterator; };
	MemberElement<gml::CSphericalCSPropertyType, _altova_mi_gml_altova_CEngineeringCRSType_altova_sphericalCS> sphericalCS;
	struct sphericalCS { typedef Iterator<gml::CSphericalCSPropertyType> iterator; };
	MemberElement<gml::CSphericalCSPropertyType, _altova_mi_gml_altova_CEngineeringCRSType_altova_usesSphericalCS> usesSphericalCS;
	struct usesSphericalCS { typedef Iterator<gml::CSphericalCSPropertyType> iterator; };
	MemberElement<gml::CUserDefinedCSPropertyType, _altova_mi_gml_altova_CEngineeringCRSType_altova_userDefinedCS> userDefinedCS;
	struct userDefinedCS { typedef Iterator<gml::CUserDefinedCSPropertyType> iterator; };
	MemberElement<gml::CCoordinateSystemPropertyType, _altova_mi_gml_altova_CEngineeringCRSType_altova_coordinateSystem> coordinateSystem;
	struct coordinateSystem { typedef Iterator<gml::CCoordinateSystemPropertyType> iterator; };
	MemberElement<gml::CCoordinateSystemPropertyType, _altova_mi_gml_altova_CEngineeringCRSType_altova_usesCS> usesCS;
	struct usesCS { typedef Iterator<gml::CCoordinateSystemPropertyType> iterator; };
	MemberElement<gml::CEngineeringDatumPropertyType, _altova_mi_gml_altova_CEngineeringCRSType_altova_engineeringDatum> engineeringDatum;
	struct engineeringDatum { typedef Iterator<gml::CEngineeringDatumPropertyType> iterator; };
	MemberElement<gml::CEngineeringDatumPropertyType, _altova_mi_gml_altova_CEngineeringCRSType_altova_usesEngineeringDatum> usesEngineeringDatum;
	struct usesEngineeringDatum { typedef Iterator<gml::CEngineeringDatumPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CEngineeringCRSType
