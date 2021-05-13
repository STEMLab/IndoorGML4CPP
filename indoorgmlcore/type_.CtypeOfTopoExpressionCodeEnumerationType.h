#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CtypeOfTopoExpressionCodeEnumerationType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CtypeOfTopoExpressionCodeEnumerationType



namespace indoorgmlcore
{

class CtypeOfTopoExpressionCodeEnumerationType : public TypeBase
{
public:
	indoorgmlcore_EXPORT CtypeOfTopoExpressionCodeEnumerationType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CtypeOfTopoExpressionCodeEnumerationType(CtypeOfTopoExpressionCodeEnumerationType const& init);
	void operator=(CtypeOfTopoExpressionCodeEnumerationType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_altova_CtypeOfTopoExpressionCodeEnumerationType); }

	enum EnumValues {
		Invalid = -1,
		k_CONTAINS = 0, // CONTAINS
		k_OVERLAPS = 1, // OVERLAPS
		k_EQUALS = 2, // EQUALS
		k_WITHIN = 3, // WITHIN
		k_CROSSES = 4, // CROSSES
		k_INTERSECTS = 5, // INTERSECTS
		EnumValueCount
	};
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

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CtypeOfTopoExpressionCodeEnumerationType
