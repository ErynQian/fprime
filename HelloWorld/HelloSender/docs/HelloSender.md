<title>HelloSender Component Dictionary</title>
# HelloSender Component Dictionary


## Command List

|Mnemonic|ID|Description|Arg Name|Arg Type|Comment
|---|---|---|---|---|---|
|SAY_HELLO|0 (0x0)|1 for hello; 2 for helloback| | |   
| | | |hello|I32||                    

## Telemetry Channel List

|Channel Name|ID|Type|Description|
|---|---|---|---|
|SEND_HELLO|0 (0x0)|I32||
|RX_HELLO|1 (0x1)|I32||

## Event List

|Event Name|ID|Description|Arg Name|Arg Type|Arg Size|Description
|---|---|---|---|---|---|---|
|I_SAID_HELLO|0 (0x0)|| | | | |
| | | |hello|I32|||    
|I_HEARD_HELLO|1 (0x1)|| | | | |
| | | |helloback|I32|||    
