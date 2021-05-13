#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_Cshort
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_Cshort



namespace indoorgmlcore
{

namespace xs
{	

class Cshort : public TypeBase
{
public:
	indoorgmlcore_EXPORT Cshort(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT Cshort(Cshort const& init);
	void operator=(Cshort const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xs_altova_Cshort); }
	void operator= (const int& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::IntegerFormatter);
		MsxmlTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator int()
	{
		return CastAs<int >::Do(GetNode(), 0);
	}
};



} // namespace xs

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_Cshort
