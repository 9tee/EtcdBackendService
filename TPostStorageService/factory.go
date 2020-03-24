package TPostStorageService

import (
	"log"

	"github.com/OpenStars/GoEndpointManager"
	"github.com/OpenStars/GoEndpointManager/GoEndpointBackendManager"
)

func NewTPostStorageService(serviceID string, etcdServers []string, defaultEndpoint GoEndpointBackendManager.EndPoint) TPostStorageServiceIf {
	// aepm := GoEndpointBackendManager.NewEndPointManager(etcdServers, serviceID)
	// err, ep := aepm.GetEndPoint()
	// if err != nil {
	// 	log.Println("Init Local TPostStorageService sid:", defaultEnpoint.ServiceID, "host:", defaultEnpoint.Host, "port:", defaultEnpoint.Port)
	// 	return &tpoststorageservice{
	// 		host: defaultEnpoint.Host,
	// 		port: defaultEnpoint.Port,
	// 		sid:  defaultEnpoint.ServiceID,
	// 	}
	// }
	// sv := &tpoststorageservice{
	// 	host: ep.Host,
	// 	port: ep.Port,
	// 	sid:  ep.ServiceID,
	// }
	// go aepm.EventChangeEndPoints(sv.handlerEventChangeEndpoint)
	// sv.epm = aepm
	// log.Println("Init From Etcd TPostStorageService sid:", sv.sid, "host:", sv.host, "port:", sv.port)
	// return sv
	postsv := &tpoststorageservice{
		host:        defaultEndpoint.Host,
		port:        defaultEndpoint.Port,
		sid:         defaultEndpoint.ServiceID,
		etcdManager: GoEndpointManager.GetEtcdBackendEndpointManagerSingleton(etcdServers),
	}

	if postsv.etcdManager == nil {
		return nil
	}
	err := postsv.etcdManager.SetDefaultEntpoint(serviceID, defaultEndpoint.Host, defaultEndpoint.Port)
	if err != nil {
		log.Println("SetDefaultEndpoint sid", serviceID, "err", err)
		return nil
	}
	postsv.etcdManager.GetAllEndpoint(serviceID)
	return postsv
}
