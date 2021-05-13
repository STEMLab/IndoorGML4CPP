#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_CarcroleType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_CarcroleType



namespace indoorgmlcore
{

namespace xlink
{	

class CarcroleType : public TypeBase
{
public:
	indoorgmlcore_EXPORT CarcroleType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CarcroleType(CarcroleType const& init);
	void operator=(CarcroleType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xlink_altova_CarcroleType); }
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

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_CarcroleType
