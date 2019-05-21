<title>Gps Component Dictionary</title>
# Gps Component Dictionary


## Command List

|Mnemonic|ID|Description|Arg Name|Arg Type|Comment
|---|---|---|---|---|---|
|Gps_ReportLockStatus|0 (0x0)|A command to force an EVR reporting lock status.| | |   

## Telemetry Channel List

|Channel Name|ID|Type|Description|
|---|---|---|---|
|Gps_Latitude|0 (0x0)|F32|The current latitude|
|Gps_Longitude|1 (0x1)|F32|The current longitude|
|Gps_Altitude|2 (0x2)|F32|The current altitude|
|Gps_Count|3 (0x3)|U32|The current number of satilites|

## Event List

|Event Name|ID|Description|Arg Name|Arg Type|Arg Size|Description
|---|---|---|---|---|---|---|
|Gps_LockAquired|0 (0x0)|A notification on GPS lock aquired| | | | |
|Gps_LockLost|1 (0x1)|A notification on GPS lock lost| | | | |
