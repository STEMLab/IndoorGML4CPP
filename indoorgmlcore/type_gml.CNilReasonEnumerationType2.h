#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CNilReasonEnumerationType2
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CNilReasonEnumerationType2



namespace indoorgmlcore
{

namespace gml
{	

class CNilReasonEnumerationType2 : public TypeBase
{
public:
	indoorgmlcore_EXPORT CNilReasonEnumerationType2(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CNilReasonEnumerationType2(CNilReasonEnumerationType2 const& init);
	void operator=(CNilReasonEnumerationType2 const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_gml_altova_CNilReasonEnumerationType2); }
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

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CNilReasonEnumerationType2
