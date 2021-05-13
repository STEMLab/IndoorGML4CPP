#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_CshowType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_CshowType



namespace indoorgmlcore
{

namespace xlink
{	

class CshowType : public TypeBase
{
public:
	indoorgmlcore_EXPORT CshowType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CshowType(CshowType const& init);
	void operator=(CshowType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xlink_altova_CshowType); }

	enum EnumValues {
		Invalid = -1,
		k_new = 0, // new
		k_replace = 1, // replace
		k_embed = 2, // embed
		k_other = 3, // other
		k_none = 4, // none
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

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_CshowType
