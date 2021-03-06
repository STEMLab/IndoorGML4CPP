#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CMeasure_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CMeasure_PropertyType



namespace indoorgmlcore
{

namespace gco
{	

class CMeasure_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CMeasure_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMeasure_PropertyType(CMeasure_PropertyType const& init);
	void operator=(CMeasure_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gco_altova_CMeasure_PropertyType); }

	MemberAttribute<string_type,_altova_mi_gco_altova_CMeasure_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gml::CMeasureType, _altova_mi_gco_altova_CMeasure_PropertyType_altova_Measure> Measure;
	struct Measure { typedef Iterator<gml::CMeasureType> iterator; };
	MemberElement<gml::CAngleType, _altova_mi_gco_altova_CMeasure_PropertyType_altova_Angle> Angle;
	struct Angle { typedef Iterator<gml::CAngleType> iterator; };
	MemberElement<gml::CLengthType, _altova_mi_gco_altova_CMeasure_PropertyType_altova_Distance> Distance;
	struct Distance { typedef Iterator<gml::CLengthType> iterator; };
	MemberElement<gml::CLengthType, _altova_mi_gco_altova_CMeasure_PropertyType_altova_Length> Length;
	struct Length { typedef Iterator<gml::CLengthType> iterator; };
	MemberElement<gml::CScaleType, _altova_mi_gco_altova_CMeasure_PropertyType_altova_Scale> Scale;
	struct Scale { typedef Iterator<gml::CScaleType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gco

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CMeasure_PropertyType
