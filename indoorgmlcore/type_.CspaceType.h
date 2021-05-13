#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CspaceType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CspaceType



namespace indoorgmlcore
{

class CspaceType : public TypeBase
{
public:
	indoorgmlcore_EXPORT CspaceType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CspaceType(CspaceType const& init);
	void operator=(CspaceType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_altova_CspaceType); }

	enum EnumValues {
		Invalid = -1,
		k_default = 0, // default
		k_preserve = 1, // preserve
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

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CspaceType
