#include "node.hpp"

Node::Node()
{
	m_data.m_datai=NULL;
	m_data.m_datac=NULL;
	m_data.m_dataf=NULL;
	m_data.m_datad=NULL;
	m_data.m_datab=NULL;
	m_data.m_datas=NULL;
	m_next=NULL;
	m_prior=NULL;
}

string Node::printElement()
{
	stringstream sst;
	if(m_data.m_datas) sst << *m_data.m_datas;
	if(m_data.m_datab) sst << *m_data.m_datab;
	if(m_data.m_datad) sst << *m_data.m_datad;
	if(m_data.m_dataf) sst << *m_data.m_dataf;
	if(m_data.m_datac) sst << *m_data.m_datac;
	if(m_data.m_datai) sst << *m_data.m_datai;
	return sst.str();
}


