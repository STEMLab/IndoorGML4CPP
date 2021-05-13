#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_Clong
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_Clong



namespace indoorgmlcore
{

namespace xs
{	

class Clong : public TypeBase
{
public:
	indoorgmlcore_EXPORT Clong(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT Clong(Clong const& init);
	void operator=(Clong const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xs_altova_Clong); }
	void operator= (const __int64& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::IntegerFormatter);
		MsxmlTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator __int64()
	{
		return CastAs<__int64 >::Do(GetNode(), 0);
	}
};



} // namespace xs

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_Clong
