#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CgDay
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CgDay



namespace indoorgmlcore
{

namespace xs
{	

class CgDay : public TypeBase
{
public:
	indoorgmlcore_EXPORT CgDay(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CgDay(CgDay const& init);
	void operator=(CgDay const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xs_altova_CgDay); }
	void operator= (const altova::DateTime& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::GDayFormatter);
		MsxmlTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator altova::DateTime()
	{
		return CastAs<altova::DateTime >::Do(GetNode(), 0);
	}
};



} // namespace xs

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CgDay
