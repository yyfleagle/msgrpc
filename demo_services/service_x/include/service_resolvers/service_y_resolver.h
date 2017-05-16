#ifndef PROJECT_SERVICE_Y_RESOLVER_H
#define PROJECT_SERVICE_Y_RESOLVER_H

#include <api/service_y/y_api_struct_declare.h>
#include <msgrpc/core/service_discovery/named_sr_listener.h>
#include <msgrpc/core/adapter/service_register.h>
#include <msgrpc/util/line_var_macro.h>


struct Y__ServiceResolver : msgrpc::NamedSRListener<service_y::k_name>, msgrpc::NamedResolver<service_y::k_name>, msgrpc::Singleton<Y__ServiceResolver> {
    virtual msgrpc::optional_service_id_t service_name_to_id(const char* service_name, const char* req, size_t req_len) override;
    virtual void on_changes(const msgrpc::instance_vector_t& instances) override;

    static msgrpc::SRListener* instance_ptr;
};

#endif //PROJECT_SERVICE_Y_RESOLVER_H
