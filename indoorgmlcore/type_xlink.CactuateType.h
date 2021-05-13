#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_CactuateType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_CactuateType



namespace indoorgmlcore
{

namespace xlink
{	

class CactuateType : public TypeBase
{
public:
	indoorgmlcore_EXPORT CactuateType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CactuateType(CactuateType const& init);
	void operator=(CactuateType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xlink_altova_CactuateType); }

	enum EnumValues {
		Invalid = -1,
		k_onLoad = 0, // onLoad
		k_onRequest = 1, // onRequest
		k_other = 2, // other
		k_none = 3, // none
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



} // namespace xlink

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_CactuateType
