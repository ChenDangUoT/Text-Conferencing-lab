/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   socket_entry.h
 * Author: dangche1
 *
 * Created on March 12, 2017, 8:03 PM
 */
#pragma once

struct socket_entry{

    int socket_;
    
    struct sockaddr ip_info;
    
    bool is_client_id_set;
    
    char client_ID[MAX_NAME];
    
    bool is_session_id_set;
    
    char session_ID;
   

};


