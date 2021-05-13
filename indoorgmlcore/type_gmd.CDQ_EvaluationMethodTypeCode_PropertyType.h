#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDQ_EvaluationMethodTypeCode_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDQ_EvaluationMethodTypeCode_PropertyType



namespace indoorgmlcore
{

namespace gmd
{	

class CDQ_EvaluationMethodTypeCode_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CDQ_EvaluationMethodTypeCode_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDQ_EvaluationMethodTypeCode_PropertyType(CDQ_EvaluationMethodTypeCode_PropertyType const& init);
	void operator=(CDQ_EvaluationMethodTypeCode_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CDQ_EvaluationMethodTypeCode_PropertyType); }

	MemberAttribute<string_type,_altova_mi_gmd_altova_CDQ_EvaluationMethodTypeCode_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gmd_altova_CDQ_EvaluationMethodTypeCode_PropertyType_altova_DQ_EvaluationMethodTypeCode> DQ_EvaluationMethodTypeCode;
	struct DQ_EvaluationMethodTypeCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDQ_EvaluationMethodTypeCode_PropertyType
