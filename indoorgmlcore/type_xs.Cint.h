#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_Cint
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_Cint



namespace indoorgmlcore
{

namespace xs
{	

class Cint : public TypeBase
{
public:
	indoorgmlcore_EXPORT Cint(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT Cint(Cint const& init);
	void operator=(Cint const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xs_altova_Cint); }
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

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_Cint
