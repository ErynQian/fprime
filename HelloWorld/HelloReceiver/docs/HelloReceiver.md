<title>HelloReceiver Component Dictionary</title>
# HelloReceiver Component Dictionary


## Command List

|Mnemonic|ID|Description|Arg Name|Arg Type|Comment
|---|---|---|---|---|---|
|SET_RESPONSE|0 (0x0)|Response : 1 for hello; 2 for helloback| | |   
|CLEAR_EVENT_THROTTLE|1 (0x1)|Clear the event throttle| | |   

## Telemetry Channel List

|Channel Name|ID|Type|Description|
|---|---|---|---|
|NUM_HELLOS|0 (0x0)|U32|The number of hellos|
|GREET|1 (0x1)|HelloWorld::Hello|Record exchanges of hello/helloback|

## Event List

|Event Name|ID|Description|Arg Name|Arg Type|Arg Size|Description
|---|---|---|---|---|---|---|
|HELLO_REPLIED|0 (0x0)|Hello replied| | | | |
| | | |helloback|I32||The reply = 2|    
|THROTTLE_CLEARED|1 (0x1)|Event throttle cleared| | | | |
