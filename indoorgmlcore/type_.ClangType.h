#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_ClangType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_ClangType



namespace indoorgmlcore
{

class ClangType : public TypeBase
{
public:
	indoorgmlcore_EXPORT ClangType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT ClangType(ClangType const& init);
	void operator=(ClangType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_altova_ClangType); }
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

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_ClangType
