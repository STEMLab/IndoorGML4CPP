#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CintegerOrNilReason
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CintegerOrNilReason



namespace indoorgmlcore
{

namespace gml
{	

class CintegerOrNilReason : public TypeBase
{
public:
	indoorgmlcore_EXPORT CintegerOrNilReason(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CintegerOrNilReason(CintegerOrNilReason const& init);
	void operator=(CintegerOrNilReason const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_gml_altova_CintegerOrNilReason); }
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

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CintegerOrNilReason
