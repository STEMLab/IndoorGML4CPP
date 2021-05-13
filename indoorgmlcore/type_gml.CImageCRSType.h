#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CImageCRSType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CImageCRSType

#include "type_gml.CAbstractCRSType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CImageCRSType : public ::indoorgmlcore::gml::CAbstractCRSType
{
public:
	indoorgmlcore_EXPORT CImageCRSType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CImageCRSType(CImageCRSType const& init);
	void operator=(CImageCRSType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CImageCRSType); }
	MemberElement<gml::CCartesianCSPropertyType, _altova_mi_gml_altova_CImageCRSType_altova_cartesianCS> cartesianCS;
	struct cartesianCS { typedef Iterator<gml::CCartesianCSPropertyType> iterator; };
	MemberElement<gml::CCartesianCSPropertyType, _altova_mi_gml_altova_CImageCRSType_altova_usesCartesianCS> usesCartesianCS;
	struct usesCartesianCS { typedef Iterator<gml::CCartesianCSPropertyType> iterator; };
	MemberElement<gml::CAffineCSPropertyType, _altova_mi_gml_altova_CImageCRSType_altova_affineCS> affineCS;
	struct affineCS { typedef Iterator<gml::CAffineCSPropertyType> iterator; };
	MemberElement<gml::CAffineCSPropertyType, _altova_mi_gml_altova_CImageCRSType_altova_usesAffineCS> usesAffineCS;
	struct usesAffineCS { typedef Iterator<gml::CAffineCSPropertyType> iterator; };
	MemberElement<gml::CObliqueCartesianCSPropertyType, _altova_mi_gml_altova_CImageCRSType_altova_usesObliqueCartesianCS> usesObliqueCartesianCS;
	struct usesObliqueCartesianCS { typedef Iterator<gml::CObliqueCartesianCSPropertyType> iterator; };
	MemberElement<gml::CImageDatumPropertyType, _altova_mi_gml_altova_CImageCRSType_altova_imageDatum> imageDatum;
	struct imageDatum { typedef Iterator<gml::CImageDatumPropertyType> iterator; };
	MemberElement<gml::CImageDatumPropertyType, _altova_mi_gml_altova_CImageCRSType_altova_usesImageDatum> usesImageDatum;
	struct usesImageDatum { typedef Iterator<gml::CImageDatumPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CImageCRSType
