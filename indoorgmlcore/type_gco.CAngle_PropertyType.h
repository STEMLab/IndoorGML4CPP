#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CAngle_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CAngle_PropertyType



namespace indoorgmlcore
{

namespace gco
{	

class CAngle_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CAngle_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAngle_PropertyType(CAngle_PropertyType const& init);
	void operator=(CAngle_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gco_altova_CAngle_PropertyType); }

	MemberAttribute<string_type,_altova_mi_gco_altova_CAngle_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gml::CAngleType, _altova_mi_gco_altova_CAngle_PropertyType_altova_Angle> Angle;
	struct Angle { typedef Iterator<gml::CAngleType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gco

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CAngle_PropertyType
