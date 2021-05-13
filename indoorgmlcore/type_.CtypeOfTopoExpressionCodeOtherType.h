#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CtypeOfTopoExpressionCodeOtherType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CtypeOfTopoExpressionCodeOtherType



namespace indoorgmlcore
{

class CtypeOfTopoExpressionCodeOtherType : public TypeBase
{
public:
	indoorgmlcore_EXPORT CtypeOfTopoExpressionCodeOtherType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CtypeOfTopoExpressionCodeOtherType(CtypeOfTopoExpressionCodeOtherType const& init);
	void operator=(CtypeOfTopoExpressionCodeOtherType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_altova_CtypeOfTopoExpressionCodeOtherType); }
	void operator= (const string_type& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::AnySimpleTypeFormatter);
		MsxmlTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator string_type()
	{
		return CastAs<string_type >::Do(GetNode(), 0);
	}
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CtypeOfTopoExpressionCodeOtherType
