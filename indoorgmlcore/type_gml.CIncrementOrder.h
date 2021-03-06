#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CIncrementOrder
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CIncrementOrder



namespace indoorgmlcore
{

namespace gml
{	

class CIncrementOrder : public TypeBase
{
public:
	indoorgmlcore_EXPORT CIncrementOrder(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CIncrementOrder(CIncrementOrder const& init);
	void operator=(CIncrementOrder const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_gml_altova_CIncrementOrder); }

	enum EnumValues {
		Invalid = -1,
		k__x_y = 0, // +x+y
		k__y_x = 1, // +y+x
		k__x_y2 = 2, // +x-y
		k__x_y3 = 3, // -x-y
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



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CIncrementOrder
