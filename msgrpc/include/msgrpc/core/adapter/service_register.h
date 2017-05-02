#ifndef PROJECT_SERVICE_REGISTER_H
#define PROJECT_SERVICE_REGISTER_H

namespace msgrpc {

    struct ServiceRegister {
        virtual bool register_service(const char* service_name, const char* end_point) = 0;

        virtual service_id_t service_name_to_id(const char* service_name, const char* req, size_t req_len) = 0;
    };

}

#endif //PROJECT_SERVICE_REGISTER_H