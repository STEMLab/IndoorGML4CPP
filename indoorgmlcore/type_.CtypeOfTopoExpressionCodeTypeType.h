#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CtypeOfTopoExpressionCodeTypeType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CtypeOfTopoExpressionCodeTypeType



namespace indoorgmlcore
{

class CtypeOfTopoExpressionCodeTypeType : public ElementType
{
public:
	indoorgmlcore_EXPORT CtypeOfTopoExpressionCodeTypeType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CtypeOfTopoExpressionCodeTypeType(CtypeOfTopoExpressionCodeTypeType const& init);
	void operator=(CtypeOfTopoExpressionCodeTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CtypeOfTopoExpressionCodeTypeType); }
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	indoorgmlcore_EXPORT operator string_type();
	indoorgmlcore_EXPORT void SetXsiType();
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CtypeOfTopoExpressionCodeTypeType
