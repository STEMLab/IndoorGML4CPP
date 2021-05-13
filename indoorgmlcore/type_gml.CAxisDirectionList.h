#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAxisDirectionList
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAxisDirectionList



namespace indoorgmlcore
{

namespace gml
{	

class CAxisDirectionList : public TypeBase
{
public:
	indoorgmlcore_EXPORT CAxisDirectionList(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAxisDirectionList(CAxisDirectionList const& init);
	void operator=(CAxisDirectionList const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_gml_altova_CAxisDirectionList); }
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



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAxisDirectionList
