#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CSecondDefiningParameterType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CSecondDefiningParameterType



namespace indoorgmlcore
{

class CSecondDefiningParameterType : public ElementType
{
public:
	indoorgmlcore_EXPORT CSecondDefiningParameterType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CSecondDefiningParameterType(CSecondDefiningParameterType const& init);
	void operator=(CSecondDefiningParameterType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CSecondDefiningParameterType); }
	MemberElement<gml::CMeasureType, _altova_mi_altova_CSecondDefiningParameterType_altova_inverseFlattening> inverseFlattening;
	struct inverseFlattening { typedef Iterator<gml::CMeasureType> iterator; };
	MemberElement<gml::CLengthType, _altova_mi_altova_CSecondDefiningParameterType_altova_semiMinorAxis> semiMinorAxis;
	struct semiMinorAxis { typedef Iterator<gml::CLengthType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_altova_CSecondDefiningParameterType_altova_isSphere> isSphere;
	struct isSphere { typedef Iterator<xs::CbooleanType> iterator; };
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CSecondDefiningParameterType
