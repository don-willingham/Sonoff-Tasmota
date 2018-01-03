/*
  de-DE.h - localization for German - Germany for Sonoff-Tasmota

  Copyright (C) 2018  VinceMasuka

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _LANGUAGE_DE_DE_H_
#define _LANGUAGE_DE_DE_H_

/*************************** ATTENTION *******************************\
 *
 * Due to memory constraints only UTF-8 is supported.
 * To save code space keep text as short as possible.
 * Time and Date provided by SDK can not be localized (yet).
 * Use online command StateText to translate ON, OFF, HOLD and TOGGLE.
 * Use online command Prefix to translate cmnd, stat and tele.
 *
\*********************************************************************/

// "2017-03-07T11:08:02" - ISO8601:2004
#define D_YEAR_MONTH_SEPARATOR "."
#define D_MONTH_DAY_SEPARATOR "."
#define D_DATE_TIME_SEPARATOR " "
#define D_HOUR_MINUTE_SEPARATOR ":"
#define D_MINUTE_SECOND_SEPARATOR ":"

#define D_DAY3LIST "SonMonDieMitDonFriSam"
#define D_MONTH3LIST "JanFebMaeAprMaiJunJulAugSepOktNovDez"

// Non JSON decimal separator
#define D_DECIMAL_SEPARATOR "."

// Common
#define D_ABORTED "abgebrochen"
#define D_ACTIVE "aktiv"
#define D_ADMIN "Admin"
#define D_AIR_QUALITY "Luftqualität"
#define D_AP "AP"                    // Access Point
#define D_APMAC_ADDRESS "AP-Mac"
#define D_APPENDED "angehängt"
#define D_AS "wie"
#define D_AUTO "AUTO"
#define D_BAUDRATE "Baudrate"
#define D_BLINK "Blinken"
#define D_BLINKOFF "BlinkenAus"
#define D_BOOTVERSION "Boot"
#define D_BOOT_COUNT "Anzahl Startvorgänge"
#define D_BOOTCOUNT "BootZähler"
#define D_BRIGHTLIGHT "hell"
#define D_BUILDDATETIME "BuildDatumUhrzeit"
#define D_BUTTON "Knopf"
#define D_BY "von"                   // Written by me
#define D_CELSIUS "Celsius"
#define D_CO2 "CO²"
#define D_CODE "code"                // Button code
#define D_COLDLIGHT "kalt"
#define D_COMMAND "Befehl"
#define D_CONNECTED "verbunden"
#define D_COREVERSION "Core"
#define D_COUNT "zählen"
#define D_COUNTER "Zähler"
#define D_CURRENT "Strom"          // As in Voltage and Current
#define D_DATA "Daten"
#define D_DARKLIGHT "dunkel"
#define D_DEBUG "debug"
#define D_DISABLED "deaktiviert"
#define D_DNS_SERVER "DNS Server"
#define D_DNSSERVER "DNSServer"
#define D_DONE "erledigt"
#define D_DST_TIME "DST"
#define D_EMPTY "leer"
#define D_EMULATION "Emulation"
#define D_ENABLED "aktiviert"
#define D_ENDDST "EndDST"           // End Daylight Savings Time
#define D_ERASE "löschen"
#define D_ERROR "Fehler"
#define D_EVERY "alle"
#define D_FAHRENHEIT "Fahrenheit"
#define D_FAILED "fehlgeschlagen"
#define D_FALLBACK "Fallback"
#define D_FALLBACK_TOPIC "Fallback topic"
#define D_FALLBACKTOPIC "FallbackTopic"
#define D_FALSE "falsch"
#define D_FILE "Datei"
#define D_FLASHMODE "FlashMode"
#define D_FLASHSIZE "FlashSize"
#define D_FREE_MEMORY "Freier Arbeitsspeicher"
#define D_FREEMEMORY "frei"
#define D_FROM "von"
#define D_GAS "Gas"
#define D_GATEWAY "Gateway"
#define D_GROUP "Gruppe"
#define D_HEAPSIZE "Heap-Größe"
#define D_HOST "Host"
#define D_HOSTNAME "Hostname"
#define D_HUMIDITY "Feuchtigkeit"
#define D_ID "ID"
#define D_ILLUMINANCE "Beleuchtungsintensität"
#define D_IMMEDIATE "direkt"      // Button immediate
#define D_INDEX "Index"
#define D_INFO "Info"
#define D_INITIALIZED "initialisiert"
#define D_IP_ADDRESS "IP-Addresse"
#define D_LIGHT "Licht"
#define D_LIMIT "Grenzwert"
#define D_LOCAL_TIME "lokale Zeit"
#define D_LWT "LWT"
#define D_MAC "MAC"
#define D_MASK "Maske"
#define D_MODULE "Modul"
#define D_MQTT "MQTT"
#define D_MULTI_PRESS "Mehrfachdruck"
#define D_NO "nein"
#define D_NOISE "Lautstärke"
#define D_NONE "keine"
#define D_OFF "aus"
#define D_OFFLINE "offline"
#define D_OK "OK"
#define D_ON "an"
#define D_ONLINE "online"
#define D_PASSWORD "Passwort"
#define D_PORT "Port"
#define D_POWER_FACTOR "Leistungsfaktor"
#define D_POWERUSAGE "Leistung"
#define D_PRESSURE "Druck"
#define D_PRESSUREATSEALEVEL "MeeresDruck"
#define D_PROGRAM_FLASH_SIZE "Ges. Flash Speicher"
#define D_PROGRAMFLASHSIZE "ProgramFlashSize"
#define D_PROGRAM_SIZE "Ben. Flash Speicher"
#define D_PROGRAMSIZE "ProgramSize"
#define D_PROJECT "Projekt"
#define D_RECEIVED "erhalten"
#define D_RESTART "Neustart"
#define D_RESTARTING "starte neu"
#define D_RESTART_REASON "Grund für Neustart"
#define D_RESTARTREASON "RestartReason"
#define D_RESTORE "Wiederherstellung"
#define D_RETAINED "beibehalten"
#define D_SAVE "Speichern"
#define D_SAVEADDRESS "SaveAddress"
#define D_SAVECOUNT "SaveCount"
#define D_SAVESTATE "SaveState"
#define D_SDKVERSION "SDK"
#define D_SELECTED "ausgewählt"
#define D_SENSOR "Sensor"
#define D_SERIAL "Seriell"
#define D_BYTES "Bytes"
#define D_SSID "SSID"
#define D_START "Start"
#define D_STARTED "gestartet"
#define D_STARTDST "StartDST"        // Start Daylight Savings Time
#define D_STD_TIME "STD"
#define D_STOP "Stop"
#define D_SUBNET_MASK "Subnetzmaske"
#define D_SUBNETMASK "Subnetmaske"
#define D_SUBSCRIBE_TO "subscribe to"
#define D_SUCCESSFUL "erfolgreich"
#define D_SWITCH "Schalter"
#define D_SYS "Sys "                  // Sys log
#define D_TEMPERATURE "Temperatur"
#define D_TEMPERATURE_UNIT "TempUnit"
#define D_TIME "Zeit"
#define D_TO "zu"
#define D_TOGGLE "An/Aus"
#define D_TOPIC "topic"
#define D_TRANSMIT "Übertragen"
#define D_TRUE "wahr"
#define D_UPGRADE "update"
#define D_UPLOAD "Upload"
#define D_UPTIME "Laufzeit"
#define D_USER "Benutzer"
#define D_UTC_TIME "UTC"
#define D_UV_LEVEL "UV Level"
#define D_VCC "VCC"
#define D_VERSION "Version"
#define D_VOLTAGE "Spannung"
#define D_WARMLIGHT "warm"
#define D_WEB "Web"                  // Web log
#define D_WEB_SERVER "Web-Server"
#define D_WIFI "WLAN"

// Text used in JSON messages
#define D_JSON_ADDRESS "Addresse"
#define D_JSON_AIRQUALITY "LuftQualität"
#define D_JSON_ANALOG_INPUT "Analog"
#define D_JSON_CO2 "CO²"
#define D_JSON_COUNTER "Zähler"
#define D_JSON_CURRENT "Strom"          // As in Voltage and Current
#define D_JSON_DATA "Daten"
#define D_JSON_DONE "erledigt"
#define D_JSON_HIGH "hoch"
#define D_JSON_HUMIDITY "Feuchtigkeit"
#define D_JSON_ILLUMINANCE "Beleuchtungsintensität"
#define D_JSON_UNKNOWN "unbekannt"
#define D_JSON_LIGHT "Licht"
#define D_JSON_LOW "niedrig"
#define D_JSON_NOISE "Lautstärke"
#define D_JSON_OR "oder"
#define D_JSON_PERIOD "Punkt"
#define D_JSON_POWERFACTOR "Faktor"
#define D_JSON_POWERUSAGE "Leistung"
#define D_JSON_PRESSURE "Druck"
#define D_JSON_PRESSUREATSEALEVEL "MeeresDruck"
#define D_JSON_SYNC "sync"
#define D_JSON_TEMPERATURE "Temperatur"
#define D_JSON_TODAY "heute"
#define D_JSON_TOTAL "Total"
#define D_JSON_TYPE "Art"
#define D_JSON_UV_LEVEL "UV Level"
#define D_JSON_VOLTAGE "Spannung"
#define D_JSON_WRONG "falsch"
#define D_JSON_YESTERDAY "gestern"

// settings.ino
#define D_SAVED_TO_FLASH_AT "in Flash gespeichert am"
#define D_LOADED_FROM_FLASH_AT "aus Flash geladen am"
#define D_USE_DEFAULTS "Standard verwenden"
#define D_ERASED_SECTOR "gelöschter Sektor"

// sonoff.ino
#define D_LEVEL_10 "level 1-0"
#define D_LEVEL_01 "level 0-1"
#define D_SERIAL_LOGGING_DISABLED "Serielles logging deaktiviert"
#define D_SYSLOG_LOGGING_REENABLED "Syslog logging reaktiviert"

#define D_SET_BAUDRATE_TO "Baudrate eingestellt auf"
#define D_RECEIVED_TOPIC "empfangenes topic"
#define D_DATA_SIZE "Datengröße"
#define D_ANALOG_INPUT "Analog"

#define D_FINGERPRINT "TLS-Fingerabdruck wird verifiziert..."
#define D_TLS_CONNECT_FAILED_TO "TLS-Verbindung fehlgeschlagen an"
#define D_RETRY_IN "Wiederversuch in"
#define D_VERIFIED "verifiziert"
#define D_INSECURE "unsichere Verbindung aufgrund ungültigen Fingerabdrucks"
#define D_CONNECT_FAILED_TO "Verbindung fehlgeschlagen aufgrund von"

// support.ino
#define D_OSWATCH "osWatch"
#define D_BLOCKED_LOOP "Blocked Loop"
#define D_WPS_FAILED_WITH_STATUS "WPS fehlgeschlagen mit Status"
#define D_ACTIVE_FOR_3_MINUTES "aktiv für 3 Minuten"
#define D_FAILED_TO_START "Starten fehlgeschlagen"
#define D_PATCH_ISSUE_2186 "Patch-Problem 2186"
#define D_CONNECTING_TO_AP "verbinden mit AP"
#define D_IN_MODE "in Modus"
#define D_CONNECT_FAILED_NO_IP_ADDRESS "Verbindung fehlgeschlagen da keine IP-Adresse zugeteilt wurde"
#define D_CONNECT_FAILED_AP_NOT_REACHED "Verbindung fehlgeschlagen da AP nicht erreicht werden konnte"
#define D_CONNECT_FAILED_WRONG_PASSWORD "Verbindung fehlgeschlagen mit AP weil das Passwort falsch ist"
#define D_CONNECT_FAILED_AP_TIMEOUT "Verbindung fehlgeschlagen da der AP nicht antwortet (timeout)"
#define D_ATTEMPTING_CONNECTION "Verbindungsversuch..."
#define D_CHECKING_CONNECTION "Prüfe Verbindung..."
#define D_QUERY_DONE "Suchanfrage abgeschlossen. MQTT-Services gefunden"
#define D_MQTT_SERVICE_FOUND "MQTT-Service gefunden bei"
#define D_I2CSCAN_DEVICES_FOUND_AT "Gerät(e) gefunden bei"
#define D_FOUND_AT "gefunden bei"
#define D_I2CSCAN_UNKNOWN_ERROR_AT "unbekannter Fehler bei"
#define D_I2CSCAN_NO_DEVICES_FOUND "keine Geräte gefunden"
#define D_SYSLOG_HOST_NOT_FOUND "Syslog Host nicht gefunden"

// webserver.ino
#define D_MINIMAL_FIRMWARE_PLEASE_UPGRADE "MINIMUM-Firmware - bitte upgraden"
#define D_WEBSERVER_ACTIVE_ON "Web-Server aktiv bei"
#define D_WITH_IP_ADDRESS "mit IP-Adresse"
#define D_WEBSERVER_STOPPED "Web-Server angehalten"
#define D_FILE_NOT_FOUND "Datei nicht gefunden"
#define D_REDIRECTED "umgeleitet zu captive portal"
#define D_WIFIMANAGER_SET_ACCESSPOINT_AND_STATION "WLAN-Manager AccessPoint gesetzt und behält Station"
#define D_WIFIMANAGER_SET_ACCESSPOINT "WLAN-Manager AccessPoint gesetzt"
#define D_TRYING_TO_CONNECT "Versuche Gerät mit Netzwerk zu verbinden"

#define D_RESTART_IN "Neustart in"
#define D_SECONDS "Sekunden"
#define D_DEVICE_WILL_RESTART "Gerät wird jetzt neu gestartet"
#define D_BUTTON_TOGGLE "An/Aus"
#define D_CONFIGURATION "Einstellungen"
#define D_INFORMATION "Informationen"
#define D_FIRMWARE_UPGRADE "Firmware Update"
#define D_CONSOLE "Konsole"
#define D_CONFIRM_RESTART "Wirklich neustarten?"

#define D_CONFIGURE_MODULE "Gerät konfigurieren"
#define D_CONFIGURE_WIFI "WLAN konfigurieren"
#define D_CONFIGURE_MQTT "MQTT konfigurieren"
#define D_CONFIGURE_DOMOTICZ "Domoticz konfigurieren"
#define D_CONFIGURE_LOGGING "Logging konfigurieren"
#define D_CONFIGURE_OTHER "Sonstige Konfiguration"
#define D_CONFIRM_RESET_CONFIGURATION "Zurücksetzen der Konfiguration bestätigen"
#define D_RESET_CONFIGURATION "Konfiguration zurücksetzen"
#define D_BACKUP_CONFIGURATION "Konfiguration sichern"
#define D_RESTORE_CONFIGURATION "Konfiguration wiederherstellen"
#define D_MAIN_MENU "Hauptmenü"

#define D_MODULE_PARAMETERS "Geräte Einstellungen"
#define D_MODULE_TYPE "Geräte Typ"
#define D_GPIO "GPIO"
#define D_SERIAL_IN "serieller Eingang [serial in]"
#define D_SERIAL_OUT "serieller Ausgang [serial out]"

#define D_WIFI_PARAMETERS "WLAN Einstellungen"
#define D_SCAN_FOR_WIFI_NETWORKS "WLAN-Netzwerk suchen und auswählen"
#define D_SCAN_DONE "Suche abgeschlossen"
#define D_NO_NETWORKS_FOUND "Keine Netzwerke gefunden"
#define D_REFRESH_TO_SCAN_AGAIN "Aktualisieren um erneut zu suchen"
#define D_DUPLICATE_ACCESSPOINT "AccessPoint duplizieren"
#define D_SKIPPING_LOW_QUALITY "überspringe wegen niedriger Qualität"
#define D_RSSI "RSSI"
#define D_WEP "WEP"
#define D_WPA_PSK "WPA PSK"
#define D_WPA2_PSK "WPA2 PSK"
#define D_AP1_SSID "WLAN 1 - SSID"
#define D_AP1_PASSWORD "WLAN 1 - Passwort"
#define D_AP2_SSID "WLAN 2 - SSID"
#define D_AP2_PASSWORD "WLAN 2 - Passwort"

#define D_MQTT_PARAMETERS "MQTT Einstellungen"
#define D_CLIENT "client"
#define D_FULL_TOPIC "full topic"

#define D_LOGGING_PARAMETERS "Logging Einstellungen"
#define D_LOG_LEVEL "Log level"
#define D_MORE_DEBUG "More debug"
#define D_SYSLOG_HOST "Sys Log Host"
#define D_SYSLOG_PORT "Sys Log Port"
#define D_TELEMETRY_PERIOD "Telemetry period"

#define D_OTHER_PARAMETERS "Sonstige Einstellungen"
#ifdef WEB_PASSWORD_2X
#define D_WEB_ADMIN_PASSWORD_CURR "Passwort für Web Oberfläche"
#define D_WEB_ADMIN_PASSWORD_INC "Passwort für Web Oberfläche"
#define D_WEB_ADMIN_PASSWORD_NEW "Passwort für Web Oberfläche"
#define D_WEB_ADMIN_PASSWORD_RPT "Passwort für Web Oberfläche"
#define D_WEB_ADMIN_PASSWORD_DIFF "Passwort für Web Oberfläche"
#else
#define D_WEB_ADMIN_PASSWORD "Passwort für Web Oberfläche"
#endif
#define D_MQTT_ENABLE "MQTT aktivieren"
#define D_FRIENDLY_NAME "Name [friendly name]"
#define D_BELKIN_WEMO "Belkin WeMo"
#define D_HUE_BRIDGE "Hue Bridge"
#define D_SINGLE_DEVICE "Einzelnes Gerät"
#define D_MULTI_DEVICE "Mehrfachgerät"

#define D_SAVE_CONFIGURATION "Konfiguration speichern"
#define D_CONFIGURATION_SAVED "Konfiguration gespeichert"
#define D_CONFIGURATION_RESET "Konfiguration zurücksetzen"

#define D_PROGRAM_VERSION "Tasmota Version"
#define D_BUILD_DATE_AND_TIME "Build-Datum & -Uhrzeit"
#define D_CORE_AND_SDK_VERSION "Core-/SDK-Version"
#define D_FLASH_WRITE_COUNT "Anz. Flash Schreibzugriffe"
#define D_MAC_ADDRESS "MAC-Adresse"
#define D_MQTT_HOST "MQTT Host"
#define D_MQTT_PORT "MQTT Port"
#define D_MQTT_CLIENT "MQTT client"
#define D_MQTT_USER "MQTT-Benutzer"
#define D_MQTT_TOPIC "MQTT topic"
#define D_MQTT_GROUP_TOPIC "MQTT group topic"
#define D_MQTT_FULL_TOPIC "MQTT full topic"
#define D_MDNS_DISCOVERY "mDNS-Ermittlung"
#define D_MDNS_ADVERTISE "mDNS-Bekanntmachung"
#define D_ESP_CHIP_ID "ESP Chip ID"
#define D_FLASH_CHIP_ID "Flash Chip ID"
#define D_FLASH_CHIP_SIZE "Realer Flash Speicher"
#define D_FREE_PROGRAM_SPACE "Verf. Flash Speicher"

#define D_UPGRADE_BY_WEBSERVER "Update über Web-Server"
#define D_OTA_URL "OTA-URL"
#define D_START_UPGRADE "Update starten"
#define D_UPGRADE_BY_FILE_UPLOAD "Update Datei hochladen"
#define D_UPLOAD_STARTED "Upload gestartet"
#define D_UPGRADE_STARTED "Update gestartet"
#define D_UPLOAD_DONE "Upload abgeschlossen"
#define D_UPLOAD_ERR_1 "keine Datei ausgewählt"
#define D_UPLOAD_ERR_2 "ungenügend Speicherplatz"
#define D_UPLOAD_ERR_3 "magic byte ist nicht 0xE9"
#define D_UPLOAD_ERR_4 "Flash-Größe des Programmes ist größer als der reale Flashspeicher"
#define D_UPLOAD_ERR_5 "Upload-buffer-Vergleich weicht ab"
#define D_UPLOAD_ERR_6 "Upload fehlgeschlagen. Aktiviere logging 3"
#define D_UPLOAD_ERR_7 "Upload abgebrochen"
#define D_UPLOAD_ERR_8 "Datei ungültig"
#define D_UPLOAD_ERR_9 "Datei zu groß"
#define D_UPLOAD_ERROR_CODE "Upload Fehler Nummer"

#define D_ENTER_COMMAND "Befehl eingeben"
#define D_ENABLE_WEBLOG_FOR_RESPONSE "Aktivere Web Log Level 2 falls Reaktion erwartet"
#define D_NEED_USER_AND_PASSWORD "Benutzer benötigt=<Benutzername>&password=<Passwort>"

// xdrv_domoticz.ino
#define D_DOMOTICZ_PARAMETERS "Domoticz parameters"
#define D_DOMOTICZ_IDX "Idx"
#define D_DOMOTICZ_KEY_IDX "Key idx"
#define D_DOMOTICZ_SWITCH_IDX "Switch idx"
#define D_DOMOTICZ_SENSOR_IDX "Sensor idx"
  #define D_DOMOTICZ_TEMP "Temp"
  #define D_DOMOTICZ_TEMP_HUM "Temp,Hum"
  #define D_DOMOTICZ_TEMP_HUM_BARO "Temp,Hum,Baro"
  #define D_DOMOTICZ_POWER_ENERGY "Power,Energy"
  #define D_DOMOTICZ_ILLUMINANCE "Illuminance"
  #define D_DOMOTICZ_COUNT "Count"
  #define D_DOMOTICZ_VOLTAGE "Voltage"
  #define D_DOMOTICZ_CURRENT "Current"
  #define D_DOMOTICZ_AIRQUALITY "AirQuality"
#define D_DOMOTICZ_UPDATE_TIMER "Update timer"

// xdrv_irremote.ino
#define D_JSON_INVALID_JSON "ungültiger JSON"
#define D_JSON_PROTOCOL_NOT_SUPPORTED "Protokoll nicht unterstützt"
#define D_JSON_IR_PROTOCOL "PROTOKOLL"
#define D_JSON_IR_BITS "BITS"
#define D_JSON_IR_DATA "DATEN"
#define D_JSON_IRHVAC_VENDOR "HERSTELLER"
#define D_JSON_IRHVAC_POWER "STROM"
#define D_JSON_IRHVAC_MODE "MODUS"
#define D_JSON_IRHVAC_FANSPEED "LÜFTERGESCHWINDIGKEIT"
#define D_JSON_IRHVAC_TEMP "TEMPERATUR"
#define D_JSON_IRRECEIVED "IR empfangen"

// xdrv_snfbridge.ino
#define D_RFRECEIVED "RF empfangen"
#define D_START_LEARNING "starte Anlernen"
#define D_SET_TO_DEFAULT "auf Standard zurücksetzen"
#define D_DEFAULT_SENT "Standard gesendet"
#define D_LEARNED_SENT "Anlernen gesendet"
#define D_LEARNING_ACTIVE "Anlernen aktiv"
#define D_LEARN_FAILED "Anlernen fehlgeschlagen"
#define D_LEARNED "angelernt"
#define D_SAVED "gespeichert"

// xdrv_wemohue.ino
#define D_MULTICAST_DISABLED "Multicast deaktiviert"
#define D_MULTICAST_REJOINED "Multicast (wieder-)verbunden"
#define D_MULTICAST_JOIN_FAILED "Multicast Verbindung fehlgeschlagen"
#define D_FAILED_TO_SEND_RESPONSE "Antwort senden fehlgeschlagen"

#define D_WEMO "WeMo"
#define D_WEMO_BASIC_EVENT "WeMo basic event"
#define D_WEMO_EVENT_SERVICE "WeMo event service"
#define D_WEMO_META_SERVICE "WeMo meta service"
#define D_WEMO_SETUP "WeMo-Setup"
#define D_RESPONSE_SENT "Antwort gesendet"

#define D_HUE "Hue"
#define D_HUE_BRIDGE_SETUP "Hue-Setup"
#define D_HUE_API_NOT_IMPLEMENTED "Hue API nicht implementiert"
#define D_HUE_API "Hue API"
#define D_HUE_POST_ARGS "Hue POST args"
#define D_3_RESPONSE_PACKETS_SENT "3 Antwortpakete gesendet"

// xsns_03_energy.ino
#define D_MAXPOWERREACHED "MaxPowerReached"
#define D_MAXPOWERREACHEDRETRY "MaxPowerReachedRetry"
#define D_POWERMONITOR "PowerMonitor"
#define D_ENERGYMONITOR "EnergyMonitor"
#define D_MAXENERGYREACHED "MaxEnergyReached"
#define D_ENERGY_TODAY "Energie heute"
#define D_ENERGY_YESTERDAY "Energie gestern"
#define D_ENERGY_TOTAL "Energie insgesamt"

// xsns_05_ds18b20.ino
#define D_SENSOR_BUSY "Sensor beschäftigt"
#define D_SENSOR_CRC_ERROR "Sensor CRC-Fehler"
#define D_SENSORS_FOUND "Sensor gefunden"

// xsns_06_dht.ino
#define D_TIMEOUT_WAITING_FOR "Timeout wartet auf"
#define D_START_SIGNAL_LOW "Startausschlag niedrig"
#define D_START_SIGNAL_HIGH "Startausschlag hoch"
#define D_PULSE "pulse"
#define D_CHECKSUM_FAILURE "Checksum-Fehler"

// xsns_07_sht1x.ino
#define D_SENSOR_DID_NOT_ACK_COMMAND "Sensor hat ACK-Befehl nicht ausgeführt"
#define D_SHT1X_FOUND "SHT1X gefunden"

// sonoff_template.h
// Max string length is 8 characters including suffixes
#define D_SENSOR_NONE     "None"
#define D_SENSOR_DHT11    "DHT11"
#define D_SENSOR_AM2301   "AM2301"
#define D_SENSOR_SI7021   "SI7021"
#define D_SENSOR_DS18X20  "DS18x20"
#define D_SENSOR_I2C_SCL  "I2C SCL"
#define D_SENSOR_I2C_SDA  "I2C SDA"
#define D_SENSOR_WS2812   "WS2812"
#define D_SENSOR_IRSEND   "IRSend"
#define D_SENSOR_SWITCH   "Switch "   // Suffix "1"
#define D_SENSOR_BUTTON   "Button "   // Suffix "1"
#define D_SENSOR_RELAY    "Relay "    // Suffix "1i"
#define D_SENSOR_LED      "LED "      // Suffix "1i"
#define D_SENSOR_PWM      "PWM "      // Suffix "1"
#define D_SENSOR_COUNTER  "Counter"   // Suffix "1"
#define D_SENSOR_IRRECV   "IRRecv"
#define D_SENSOR_MHZ_RX   "MHZ Rx"
#define D_SENSOR_MHZ_TX   "MHZ Tx"
#define D_SENSOR_PZEM_RX  "PZEM Rx"
#define D_SENSOR_PZEM_TX  "PZEM Tx"
#define D_SENSOR_SAIR_RX  "SAir Rx"
#define D_SENSOR_SAIR_TX  "SAir Tx"
#define D_SENSOR_SPI_CS   "SPI CS"
#define D_SENSOR_SPI_DC   "SPI DC"
#define D_SENSOR_BACKLIGHT "BLight"

// Units
#define D_UNIT_AMPERE "A"
#define D_UNIT_HOUR "h"
#define D_UNIT_KILOOHM "kOhm"
#define D_UNIT_KILOWATTHOUR "kWh"
#define D_UNIT_LUX "lx"
#define D_UNIT_MICROSECOND "µs"
#define D_UNIT_MILLIAMPERE "mA"
#define D_UNIT_MILLISECOND "ms"
#define D_UNIT_MINUTE "min"
#define D_UNIT_PPM "ppm"
#define D_UNIT_PRESSURE "hPa"
#define D_UNIT_SECOND "sek"
#define D_UNIT_SECTORS "Sektoren"
#define D_UNIT_VOLT "V"
#define D_UNIT_WATT "W"
#define D_UNIT_WATTHOUR "Wh"

// Log message prefix
#define D_LOG_APPLICATION "APP: "  // Application
#define D_LOG_BRIDGE "BRG: "       // Bridge
#define D_LOG_CONFIG "CFG: "       // Settings
#define D_LOG_COMMAND "CMD: "      // Command
#define D_LOG_DEBUG "DBG: "        // Debug
#define D_LOG_DHT "DHT: "          // DHT sensor
#define D_LOG_DOMOTICZ "DOM: "     // Domoticz
#define D_LOG_DSB "DSB: "          // DS18xB20 sensor
#define D_LOG_HTTP "HTP: "         // HTTP webserver
#define D_LOG_I2C "I2C: "          // I2C
#define D_LOG_IRR "IRR: "          // Infra Red Received
#define D_LOG_LOG "LOG: "          // Logging
#define D_LOG_MODULE "MOD: "       // Module
#define D_LOG_MDNS "DNS: "         // mDNS
#define D_LOG_MQTT "MQT: "         // MQTT
#define D_LOG_OTHER "OTH: "        // Other
#define D_LOG_RESULT "RSL: "       // Result
#define D_LOG_RFR "RFR: "          // RF Received
#define D_LOG_SERIAL "SER: "       // Serial
#define D_LOG_SHT1 "SHT: "         // SHT1x sensor
#define D_LOG_UPLOAD "UPL: "       // Upload
#define D_LOG_UPNP "UPP: "         // UPnP
#define D_LOG_WIFI "WIF: "         // Wifi

// Result
#define D_RSLT_RESULT "ERGEBNIS"
#define D_RSLT_INFO "INFO"
#define D_RSLT_STATE "STATUS"
#define D_RSLT_SENSOR "SENSOR"
#define D_RSLT_UPTIME "LAUFZEIT"
#define D_RSLT_MARGINS "TOLERANZ"
#define D_RSLT_WARNING "WARNUNG"
#define D_RSLT_ENERGY "ENERGIE"

// Commands
#define D_CMND_MQTTHOST "MqttHost"
#define D_CMND_MQTTPORT "MqttPort"
#define D_CMND_MQTTRETRY "MqttRetry"
#define D_CMND_STATETEXT "StateText"
#define D_CMND_MQTTFINGERPRINT "MqttFingerprint"
#define D_CMND_MQTTCLIENT "MqttClient"
#define D_CMND_MQTTUSER "MqttUser"
#define D_CMND_MQTTPASSWORD "MqttPassword"
#define D_CMND_FULLTOPIC "FullTopic"
#define D_CMND_PREFIX "Prefix"
  #define PRFX_MAX_STRING_LENGTH 5
  #define D_CMND "cmnd"
  #define D_STAT "stat"
  #define D_TELE "tele"
#define D_CMND_GROUPTOPIC "GroupTopic"
#define D_CMND_TOPIC "Topic"
#define D_CMND_BUTTONTOPIC "ButtonTopic"
#define D_CMND_SWITCHTOPIC "SwitchTopic"
#define D_CMND_BUTTONRETAIN "ButtonRetain"
#define D_CMND_SWITCHRETAIN "SwitchRetain"
#define D_CMND_POWERRETAIN "PowerRetain"
#define D_CMND_SENSORRETAIN "SensorRetain"
#define D_CMND_BACKLOG "Backlog"
#define D_CMND_DELAY "Delay"
#define D_CMND_STATUS "Status"
  #define D_STATUS1_PARAMETER "PRM"
  #define D_STATUS2_FIRMWARE "FWR"
  #define D_STATUS3_LOGGING "LOG"
  #define D_STATUS4_MEMORY "MEM"
  #define D_STATUS5_NETWORK "NET"
  #define D_STATUS6_MQTT "MQT"
  #define D_STATUS7_TIME "TIM"
  #define D_STATUS8_POWER "PWR"
  #define D_STATUS9_MARGIN "PTH"
  #define D_STATUS10_SENSOR "SNS"
  #define D_STATUS11_STATUS "STS"
#define D_CMND_POWER "Power"
  #define D_RSLT_POWER "POWER"
#define D_CMND_POWERONSTATE "PowerOnState"
#define D_CMND_PULSETIME "PulseTime"
#define D_CMND_BLINKTIME "BlinkTime"
#define D_CMND_BLINKCOUNT "BlinkCount"
#define D_CMND_SAVEDATA "SaveData"
#define D_CMND_SETOPTION "SetOption"
#define D_CMND_TEMPERATURE_RESOLUTION "TempRes"
#define D_CMND_HUMIDITY_RESOLUTION "HumRes"
#define D_CMND_PRESSURE_RESOLUTION "PressRes"
#define D_CMND_POWER_RESOLUTION "WattRes"
#define D_CMND_VOLTAGE_RESOLUTION "VoltRes"
#define D_CMND_CURRENT_RESOLUTION "AmpRes"
#define D_CMND_ENERGY_RESOLUTION "EnergyRes"
#define D_CMND_MODULE "Module"
#define D_CMND_MODULES "Modules"
#define D_CMND_GPIO "GPIO"
  #define D_NOT_SUPPORTED "Not supported"
#define D_CMND_GPIOS "GPIOs"
#define D_CMND_PWM "PWM"
#define D_CMND_PWMFREQUENCY "PWMFrequency"
#define D_CMND_PWMRANGE "PWMRange"
#define D_CMND_COUNTER "Counter"
#define D_CMND_COUNTERTYPE "CounterType"
#define D_CMND_COUNTERDEBOUNCE "CounterDebounce"
#define D_CMND_SLEEP "Sleep"
#define D_CMND_UPLOAD "Upload"
#define D_CMND_UPGRADE "Upgrade"
  #define D_ONE_OR_GT "1 or >%s to upgrade"
#define D_CMND_OTAURL "OtaUrl"
#define D_CMND_SERIALLOG "SerialLog"
#define D_CMND_SYSLOG "SysLog"
#define D_CMND_LOGHOST "LogHost"
#define D_CMND_LOGPORT "LogPort"
#define D_CMND_IPADDRESS "IPAddress"
#define D_CMND_NTPSERVER "NtpServer"
#define D_CMND_AP "Ap"
#define D_CMND_SSID "SSId"
#define D_CMND_PASSWORD "Password"
#define D_CMND_HOSTNAME "Hostname"
#define D_CMND_WIFICONFIG "WifiConfig"
  #define WCFG_MAX_STRING_LENGTH 12
  #define D_WCFG_0_RESTART "Restart"
  #define D_WCFG_1_SMARTCONFIG "SmartConfig"
  #define D_WCFG_2_WIFIMANAGER "WifiManager"
  #define D_WCFG_3_WPSCONFIG "WPSConfig"
  #define D_WCFG_4_RETRY "Retry"
  #define D_WCFG_5_WAIT "Wait"
#define D_CMND_FRIENDLYNAME "FriendlyName"
#define D_CMND_SWITCHMODE "SwitchMode"
#define D_CMND_WEBSERVER "Webserver"
  #define D_WEBSERVER_MODE "WebServerMode"
  #define D_ACTIVE_FOR "Active for"
  #define D_ON_DEVICE "on"
#define D_CMND_WEBPASSWORD "WebPassword"
#define D_CMND_WEBLOG "WebLog"
#define D_CMND_EMULATION "Emulation"
#define D_CMND_TELEPERIOD "TelePeriod"
#define D_CMND_RESTART "Restart"
  #define D_ONE_TO_RESTART "1 to restart"
#define D_CMND_RESET "Reset"
  #define D_RESET_AND_RESTARTING "Reset and Restarting"
  #define D_ONE_TO_RESET "1 to reset"
#define D_CMND_TIMEZONE "Timezone"
#define D_CMND_ALTITUDE "Altitude"
#define D_CMND_LEDPOWER "LedPower"
#define D_CMND_LEDSTATE "LedState"
#define D_CMND_CFGDUMP "CfgDump"
#define D_CMND_I2CSCAN "I2CScan"
#define D_CMND_INA219MODE "Ina219Mode"
#define D_CMND_EXCEPTION "Exception"

// Commands xdrv_display.ino
#define D_CMND_DISPLAY "Display"
#define D_CMND_DISP_MODEL "Model"
#define D_CMND_DISP_MODE "Mode"
#define D_CMND_DISP_REFRESH "Refresh"
#define D_CMND_DISP_DIMMER "Dimmer"
#define D_CMND_DISP_COLS "Cols"
#define D_CMND_DISP_ROWS "Rows"
#define D_CMND_DISP_ADDRESS "Address"

// Commands xdrv_domoticz.ino
#define D_CMND_DOMOTICZ "Domoticz"
#define D_CMND_IDX "Idx"
#define D_CMND_KEYIDX "KeyIdx"
#define D_CMND_SWITCHIDX "SwitchIdx"
#define D_CMND_SENSORIDX "SensorIdx"
#define D_CMND_UPDATETIMER "UpdateTimer"

// Commands xdrv_irremote.ino
#define D_CMND_IRSEND "IRSend"
#define D_CMND_IRHVAC "IRHVAC"

// Commands xdrv_light.ino
#define D_CMND_COLOR "Color"
#define D_CMND_COLORTEMPERATURE "CT"
#define D_CMND_DIMMER "Dimmer"
#define D_CMND_LED "Led"
#define D_CMND_LEDTABLE "LedTable"
#define D_CMND_FADE "Fade"
#define D_CMND_PIXELS "Pixels"
#define D_CMND_SCHEME "Scheme"
#define D_CMND_SPEED "Speed"
#define D_CMND_WAKEUP "Wakeup"
#define D_CMND_WAKEUPDURATION "WakeUpDuration"
#define D_CMND_WIDTH "Width"

// Commands xdrv_snfbridge.ino
#define D_CMND_RFCODE "RfCode"
#define D_CMND_RFHIGH "RfHigh"
#define D_CMND_RFHOST "RfHost"
#define D_CMND_RFKEY "RfKey"
#define D_CMND_RFLOW "RfLow"
#define D_CMND_RFSYNC "RfSync"

// Commands xsns_03_energy.ino
#define D_CMND_POWERLOW "PowerLow"
#define D_CMND_POWERHIGH "PowerHigh"
#define D_CMND_VOLTAGELOW "VoltageLow"
#define D_CMND_VOLTAGEHIGH "VoltageHigh"
#define D_CMND_CURRENTLOW "CurrentLow"
#define D_CMND_CURRENTHIGH "CurrentHigh"
#define D_CMND_ENERGYRESET "EnergyReset"
#define D_CMND_HLWPCAL "HlwPcal"
#define D_CMND_HLWPSET "HlwPset"
#define D_CMND_HLWUCAL "HlwUcal"
#define D_CMND_HLWUSET "HlwUset"
#define D_CMND_HLWICAL "HlwIcal"
#define D_CMND_HLWISET "HlwIset"
#define D_CMND_MAXPOWER "MaxPower"
#define D_CMND_MAXPOWERHOLD "MaxPowerHold"
#define D_CMND_MAXPOWERWINDOW "MaxPowerWindow"
#define D_CMND_SAFEPOWER "SafePower"
#define D_CMND_SAFEPOWERHOLD "SafePowerHold"
#define D_CMND_SAFEPOWERWINDOW "SafePowerWindow"
#define D_CMND_MAXENERGY "MaxEnergy"
#define D_CMND_MAXENERGYSTART "MaxEnergyStart"

#endif  // _LANGUAGE_DE_DE_H_
