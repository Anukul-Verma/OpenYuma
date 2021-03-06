
#ifndef _H_openconfig_platform
#define _H_openconfig_platform
/* 
 * Copyright (c) 2008-2012, Andy Bierman, All Rights Reserved.
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 *

*** Generated by yangdump 2.5-5

    Combined SIL header
    module openconfig-platform
    revision 2018-06-03
    namespace http://openconfig.net/yang/platform
    organization OpenConfig working group

 */

#include <xmlstring.h>

#include "dlq.h"
#include "ncxtypes.h"
#include "op.h"
#include "status.h"
#include "val.h"

#ifdef __cplusplus
extern "C" {
#endif

#define y_openconfig_platform_M_openconfig_platform (const xmlChar *)"openconfig-platform"
#define y_openconfig_platform_R_openconfig_platform (const xmlChar *)"2018-06-03"

#define y_openconfig_platform_N_alarm_severity (const xmlChar *)"alarm-severity"
#define y_openconfig_platform_N_alarm_status (const xmlChar *)"alarm-status"
#define y_openconfig_platform_N_alarm_threshold (const xmlChar *)"alarm-threshold"
#define y_openconfig_platform_N_allocated_power (const xmlChar *)"allocated-power"
#define y_openconfig_platform_N_available (const xmlChar *)"available"
#define y_openconfig_platform_N_avg (const xmlChar *)"avg"
#define y_openconfig_platform_N_backplane (const xmlChar *)"backplane"
#define y_openconfig_platform_N_chassis (const xmlChar *)"chassis"
#define y_openconfig_platform_N_component (const xmlChar *)"component"
#define y_openconfig_platform_N_components (const xmlChar *)"components"
#define y_openconfig_platform_N_config (const xmlChar *)"config"
#define y_openconfig_platform_N_configurable (const xmlChar *)"configurable"
#define y_openconfig_platform_N_cpu (const xmlChar *)"cpu"
#define y_openconfig_platform_N_description (const xmlChar *)"description"
#define y_openconfig_platform_N_empty (const xmlChar *)"empty"
#define y_openconfig_platform_N_fabric (const xmlChar *)"fabric"
#define y_openconfig_platform_N_fan (const xmlChar *)"fan"
#define y_openconfig_platform_N_firmware_version (const xmlChar *)"firmware-version"
#define y_openconfig_platform_N_hardware_version (const xmlChar *)"hardware-version"
#define y_openconfig_platform_N_id (const xmlChar *)"id"
#define y_openconfig_platform_N_instant (const xmlChar *)"instant"
#define y_openconfig_platform_N_integrated_circuit (const xmlChar *)"integrated-circuit"
#define y_openconfig_platform_N_interval (const xmlChar *)"interval"
#define y_openconfig_platform_N_max (const xmlChar *)"max"
#define y_openconfig_platform_N_max_time (const xmlChar *)"max-time"
#define y_openconfig_platform_N_memory (const xmlChar *)"memory"
#define y_openconfig_platform_N_mfg_date (const xmlChar *)"mfg-date"
#define y_openconfig_platform_N_mfg_name (const xmlChar *)"mfg-name"
#define y_openconfig_platform_N_min (const xmlChar *)"min"
#define y_openconfig_platform_N_min_time (const xmlChar *)"min-time"
#define y_openconfig_platform_N_name (const xmlChar *)"name"
#define y_openconfig_platform_N_oper_status (const xmlChar *)"oper-status"
#define y_openconfig_platform_N_parent (const xmlChar *)"parent"
#define y_openconfig_platform_N_part_no (const xmlChar *)"part-no"
#define y_openconfig_platform_N_port (const xmlChar *)"port"
#define y_openconfig_platform_N_power_supply (const xmlChar *)"power-supply"
#define y_openconfig_platform_N_properties (const xmlChar *)"properties"
#define y_openconfig_platform_N_property (const xmlChar *)"property"
#define y_openconfig_platform_N_removable (const xmlChar *)"removable"
#define y_openconfig_platform_N_serial_no (const xmlChar *)"serial-no"
#define y_openconfig_platform_N_software_version (const xmlChar *)"software-version"
#define y_openconfig_platform_N_state (const xmlChar *)"state"
#define y_openconfig_platform_N_storage (const xmlChar *)"storage"
#define y_openconfig_platform_N_subcomponent (const xmlChar *)"subcomponent"
#define y_openconfig_platform_N_subcomponents (const xmlChar *)"subcomponents"
#define y_openconfig_platform_N_temperature (const xmlChar *)"temperature"
#define y_openconfig_platform_N_type (const xmlChar *)"type"
#define y_openconfig_platform_N_used_power (const xmlChar *)"used-power"
#define y_openconfig_platform_N_utilized (const xmlChar *)"utilized"
#define y_openconfig_platform_N_value (const xmlChar *)"value"

/* container /components/component/config */
typedef struct y_openconfig_platform_T_components_component_config_ {
    xmlChar *name;
} y_openconfig_platform_T_components_component_config;

/* container /components/component/state/temperature */
typedef struct y_openconfig_platform_T_components_component_state_temperature_ {
    int64 instant;
    int64 avg;
    int64 min;
    int64 max;
    uint64 interval;
    uint64 min_time;
    uint64 max_time;
    boolean alarm_status;
    uint32 alarm_threshold;
    val_idref_t *alarm_severity;
} y_openconfig_platform_T_components_component_state_temperature;

/* container /components/component/state/memory */
typedef struct y_openconfig_platform_T_components_component_state_memory_ {
    uint64 available;
    uint64 utilized;
} y_openconfig_platform_T_components_component_state_memory;

/* container /components/component/state */
typedef struct y_openconfig_platform_T_components_component_state_ {
    xmlChar *name;
    xmlChar *type;
    xmlChar *id;
    xmlChar *description;
    xmlChar *mfg_name;
    xmlChar *mfg_date;
    xmlChar *hardware_version;
    xmlChar *firmware_version;
    xmlChar *software_version;
    xmlChar *serial_no;
    xmlChar *part_no;
    boolean removable;
    val_idref_t *oper_status;
    boolean empty;
    xmlChar *parent;
    y_openconfig_platform_T_components_component_state_temperature temperature;
    y_openconfig_platform_T_components_component_state_memory memory;
    uint32 allocated_power;
    uint32 used_power;
} y_openconfig_platform_T_components_component_state;

/* container /components/component/properties/property/config */
typedef struct y_openconfig_platform_T_components_component_properties_property_config_ {
    xmlChar *name;
    xmlChar *value;
} y_openconfig_platform_T_components_component_properties_property_config;

/* container /components/component/properties/property/state */
typedef struct y_openconfig_platform_T_components_component_properties_property_state_ {
    xmlChar *name;
    xmlChar *value;
    boolean configurable;
} y_openconfig_platform_T_components_component_properties_property_state;

/* list /components/component/properties/property */
typedef struct y_openconfig_platform_T_components_component_properties_property_ {
    dlq_hdr_t qhdr;
    xmlChar *name;
    y_openconfig_platform_T_components_component_properties_property_config config;
    y_openconfig_platform_T_components_component_properties_property_state state;
} y_openconfig_platform_T_components_component_properties_property;

/* container /components/component/properties */
typedef struct y_openconfig_platform_T_components_component_properties_ {
    dlq_hdr_t property;
} y_openconfig_platform_T_components_component_properties;

/* container /components/component/subcomponents/subcomponent/config */
typedef struct y_openconfig_platform_T_components_component_subcomponents_subcomponent_config_ {
    xmlChar *name;
} y_openconfig_platform_T_components_component_subcomponents_subcomponent_config;

/* container /components/component/subcomponents/subcomponent/state */
typedef struct y_openconfig_platform_T_components_component_subcomponents_subcomponent_state_ {
    xmlChar *name;
} y_openconfig_platform_T_components_component_subcomponents_subcomponent_state;

/* list /components/component/subcomponents/subcomponent */
typedef struct y_openconfig_platform_T_components_component_subcomponents_subcomponent_ {
    dlq_hdr_t qhdr;
    xmlChar *name;
    y_openconfig_platform_T_components_component_subcomponents_subcomponent_config config;
    y_openconfig_platform_T_components_component_subcomponents_subcomponent_state state;
} y_openconfig_platform_T_components_component_subcomponents_subcomponent;

/* container /components/component/subcomponents */
typedef struct y_openconfig_platform_T_components_component_subcomponents_ {
    dlq_hdr_t subcomponent;
} y_openconfig_platform_T_components_component_subcomponents;

/* container /components/component/chassis/config */
typedef struct y_openconfig_platform_T_components_component_chassis_config_ {
} y_openconfig_platform_T_components_component_chassis_config;

/* container /components/component/chassis/state */
typedef struct y_openconfig_platform_T_components_component_chassis_state_ {
} y_openconfig_platform_T_components_component_chassis_state;

/* container /components/component/chassis */
typedef struct y_openconfig_platform_T_components_component_chassis_ {
    y_openconfig_platform_T_components_component_chassis_config config;
    y_openconfig_platform_T_components_component_chassis_state state;
} y_openconfig_platform_T_components_component_chassis;

/* container /components/component/port/config */
typedef struct y_openconfig_platform_T_components_component_port_config_ {
} y_openconfig_platform_T_components_component_port_config;

/* container /components/component/port/state */
typedef struct y_openconfig_platform_T_components_component_port_state_ {
    xmlChar *type;
} y_openconfig_platform_T_components_component_port_state;

/* container /components/component/port */
typedef struct y_openconfig_platform_T_components_component_port_ {
    y_openconfig_platform_T_components_component_port_config config;
    y_openconfig_platform_T_components_component_port_state state;
} y_openconfig_platform_T_components_component_port;

/* container /components/component/power-supply/config */
typedef struct y_openconfig_platform_T_components_component_power_supply_config_ {
} y_openconfig_platform_T_components_component_power_supply_config;

/* container /components/component/power-supply/state */
typedef struct y_openconfig_platform_T_components_component_power_supply_state_ {
} y_openconfig_platform_T_components_component_power_supply_state;

/* container /components/component/power-supply */
typedef struct y_openconfig_platform_T_components_component_power_supply_ {
    y_openconfig_platform_T_components_component_power_supply_config config;
    y_openconfig_platform_T_components_component_power_supply_state state;
} y_openconfig_platform_T_components_component_power_supply;

/* container /components/component/fan/config */
typedef struct y_openconfig_platform_T_components_component_fan_config_ {
} y_openconfig_platform_T_components_component_fan_config;

/* container /components/component/fan/state */
typedef struct y_openconfig_platform_T_components_component_fan_state_ {
} y_openconfig_platform_T_components_component_fan_state;

/* container /components/component/fan */
typedef struct y_openconfig_platform_T_components_component_fan_ {
    y_openconfig_platform_T_components_component_fan_config config;
    y_openconfig_platform_T_components_component_fan_state state;
} y_openconfig_platform_T_components_component_fan;

/* container /components/component/fabric/config */
typedef struct y_openconfig_platform_T_components_component_fabric_config_ {
} y_openconfig_platform_T_components_component_fabric_config;

/* container /components/component/fabric/state */
typedef struct y_openconfig_platform_T_components_component_fabric_state_ {
} y_openconfig_platform_T_components_component_fabric_state;

/* container /components/component/fabric */
typedef struct y_openconfig_platform_T_components_component_fabric_ {
    y_openconfig_platform_T_components_component_fabric_config config;
    y_openconfig_platform_T_components_component_fabric_state state;
} y_openconfig_platform_T_components_component_fabric;

/* container /components/component/storage/config */
typedef struct y_openconfig_platform_T_components_component_storage_config_ {
} y_openconfig_platform_T_components_component_storage_config;

/* container /components/component/storage/state */
typedef struct y_openconfig_platform_T_components_component_storage_state_ {
} y_openconfig_platform_T_components_component_storage_state;

/* container /components/component/storage */
typedef struct y_openconfig_platform_T_components_component_storage_ {
    y_openconfig_platform_T_components_component_storage_config config;
    y_openconfig_platform_T_components_component_storage_state state;
} y_openconfig_platform_T_components_component_storage;

/* container /components/component/cpu/config */
typedef struct y_openconfig_platform_T_components_component_cpu_config_ {
} y_openconfig_platform_T_components_component_cpu_config;

/* container /components/component/cpu/state */
typedef struct y_openconfig_platform_T_components_component_cpu_state_ {
} y_openconfig_platform_T_components_component_cpu_state;

/* container /components/component/cpu */
typedef struct y_openconfig_platform_T_components_component_cpu_ {
    y_openconfig_platform_T_components_component_cpu_config config;
    y_openconfig_platform_T_components_component_cpu_state state;
} y_openconfig_platform_T_components_component_cpu;

/* container /components/component/integrated-circuit/config */
typedef struct y_openconfig_platform_T_components_component_integrated_circuit_config_ {
} y_openconfig_platform_T_components_component_integrated_circuit_config;

/* container /components/component/integrated-circuit/state */
typedef struct y_openconfig_platform_T_components_component_integrated_circuit_state_ {
} y_openconfig_platform_T_components_component_integrated_circuit_state;

/* container /components/component/integrated-circuit */
typedef struct y_openconfig_platform_T_components_component_integrated_circuit_ {
    y_openconfig_platform_T_components_component_integrated_circuit_config config;
    y_openconfig_platform_T_components_component_integrated_circuit_state state;
} y_openconfig_platform_T_components_component_integrated_circuit;

/* container /components/component/backplane/config */
typedef struct y_openconfig_platform_T_components_component_backplane_config_ {
} y_openconfig_platform_T_components_component_backplane_config;

/* container /components/component/backplane/state */
typedef struct y_openconfig_platform_T_components_component_backplane_state_ {
} y_openconfig_platform_T_components_component_backplane_state;

/* container /components/component/backplane */
typedef struct y_openconfig_platform_T_components_component_backplane_ {
    y_openconfig_platform_T_components_component_backplane_config config;
    y_openconfig_platform_T_components_component_backplane_state state;
} y_openconfig_platform_T_components_component_backplane;

/* list /components/component */
typedef struct y_openconfig_platform_T_components_component_ {
    dlq_hdr_t qhdr;
    xmlChar *name;
    y_openconfig_platform_T_components_component_config config;
    y_openconfig_platform_T_components_component_state state;
    y_openconfig_platform_T_components_component_properties properties;
    y_openconfig_platform_T_components_component_subcomponents subcomponents;
    y_openconfig_platform_T_components_component_chassis chassis;
    y_openconfig_platform_T_components_component_port port;
    y_openconfig_platform_T_components_component_power_supply power_supply;
    y_openconfig_platform_T_components_component_fan fan;
    y_openconfig_platform_T_components_component_fabric fabric;
    y_openconfig_platform_T_components_component_storage storage;
    y_openconfig_platform_T_components_component_cpu cpu;
    y_openconfig_platform_T_components_component_integrated_circuit integrated_circuit;
    y_openconfig_platform_T_components_component_backplane backplane;
} y_openconfig_platform_T_components_component;

/* container /components */
typedef struct y_openconfig_platform_T_components_ {
    dlq_hdr_t component;
} y_openconfig_platform_T_components;
/********************************************************************
* FUNCTION y_openconfig_platform_init
* 
* initialize the openconfig-platform server instrumentation library
* 
* INPUTS:
*    modname == requested module name
*    revision == requested version (NULL for any)
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t y_openconfig_platform_init (
    const xmlChar *modname,
    const xmlChar *revision);

/********************************************************************
* FUNCTION y_openconfig_platform_init2
* 
* SIL init phase 2: non-config data structures
* Called after running config is loaded
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t y_openconfig_platform_init2 (void);

/********************************************************************
* FUNCTION y_openconfig_platform_cleanup
*    cleanup the server instrumentation library
* 
********************************************************************/
extern void y_openconfig_platform_cleanup (void);

#ifdef __cplusplus
} /* end extern 'C' */
#endif

#endif