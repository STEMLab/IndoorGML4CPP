#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDirectionVectorType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDirectionVectorType



namespace indoorgmlcore
{

namespace gml
{	

class CDirectionVectorType : public ElementType
{
public:
	indoorgmlcore_EXPORT CDirectionVectorType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDirectionVectorType(CDirectionVectorType const& init);
	void operator=(CDirectionVectorType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CDirectionVectorType); }
	MemberElement<gml::CVectorType, _altova_mi_gml_altova_CDirectionVectorType_altova_vector> vector;
	struct vector { typedef Iterator<gml::CVectorType> iterator; };
	MemberElement<gml::CAngleType, _altova_mi_gml_altova_CDirectionVectorType_altova_horizontalAngle> horizontalAngle;
	struct horizontalAngle { typedef Iterator<gml::CAngleType> iterator; };
	MemberElement<gml::CAngleType, _altova_mi_gml_altova_CDirectionVectorType_altova_verticalAngle> verticalAngle;
	struct verticalAngle { typedef Iterator<gml::CAngleType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDirectionVectorType
