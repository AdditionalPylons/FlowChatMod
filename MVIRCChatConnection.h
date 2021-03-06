/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MVChatConnection.h"
#import "MVIRCChatConnection.h"

@class NSConditionLock, NSMutableDictionary, NSMutableSet, NSString, NSMutableArray, NSTimer, NSDate, NSCharacterSet, AsyncSocket, NSThread;

__attribute__((visibility("hidden")))
@interface MVIRCChatConnection : MVChatConnection {
	AsyncSocket* _chatConnection;
	NSTimer* _periodicCleanUpTimer;
	NSThread* _connectionThread;
	NSDate* _queueWait;
	NSDate* _lastCommand;
	NSMutableArray* _sendQueue;
	NSMutableDictionary* _knownUsers;
	NSMutableSet* _pendingWhoisUsers;
	NSMutableSet* _directClientConnections;
	NSMutableDictionary* _serverInformation;
	NSString* _server;
	NSString* _currentNickname;
	NSString* _nickname;
	NSString* _username;
	NSString* _password;
	NSString* _realName;
	NSMutableSet* _lastSentIsonNicknames;
	NSCharacterSet* _roomPrefixes;
	NSConditionLock* _threadWaitLock;
	unsigned short _serverPort;
	unsigned short _isonSentCount;
	BOOL _watchCommandSupported;
	BOOL _sendQueueProcessing;
}
+(id)defaultServerPorts;
-(id)connectionThread;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)selector;
-(id)urlScheme;
-(int)type;
-(const unsigned*)supportedStringEncodings;
-(void)connect;
-(void)disconnectWithReason:(NSString*)reason;
-(id)roomsListArray;
-(id)getServerInfo;
-(void)setRealName:(id)name;
-(id)realName;
-(void)setNickname:(id)nickname;
-(id)nickname;
-(id)preferredNickname;
-(void)setNicknamePassword:(id)password;
-(void)setPassword:(id)password;
-(id)password;
-(void)setUsername:(id)username;
-(id)username;
-(void)setServer:(id)server;
-(id)server;
-(void)setServerPort:(unsigned short)port;
-(unsigned short)serverPort;
-(void)sendUserCommand:(id)command withArguments:(id)arguments;
-(void)sendMessage:(NSString*)message withEncoding:(unsigned)encoding toTarget:(id)target withAttributes:(id)attributes;
-(void)sendRawMessage:(id)message immediately:(BOOL)immediately;
-(void)joinChatRoomsNamed:(id)named;
-(void)joinChatRoomNamed:(id)named withPassphrase:(id)passphrase;
-(id)joinedChatRoomWithUniqueIdentifier:(id)uniqueIdentifier;
-(id)joinedChatRoomWithName:(id)name;
-(id)chatRoomNamePrefixes;
-(id)properNameForChatRoomNamed:(id)chatRoomNamed;
-(id)knownChatUsers;
-(id)chatUsersWithNickname:(id)nickname;
-(id)chatUserWithUniqueIdentifier:(id)uniqueIdentifier;
-(void)addChatUserWatchRule:(id)rule;
-(void)removeChatUserWatchRule:(id)rule;
-(void)fetchChatRoomList;
-(void)stopFetchingChatRoomList;
-(void)setAwayStatusMessage:(NSString*)message;
-(id)socket;
-(void)disconn;
@end

@interface MVIRCChatConnection (MVIRCChatConnectionProtocolHandlers)
-(void)_handle001WithParameters:(id)parameters fromSender:(id)sender;
-(void)_handle005WithParameters:(id)parameters fromSender:(id)sender;
-(void)_handle433WithParameters:(id)parameters fromSender:(id)sender;
-(void)_handlePrivmsg:(id)privmsg;
-(void)_handlePrivmsgWithParameters:(id)parameters fromSender:(id)sender;
-(void)bncNoConnectFix;
-(void)_handleNotice:(id)notice;
-(void)_handleNoticeWithParameters:(id)parameters fromSender:(id)sender;
-(void)send;
-(void)_handleCTCP:(id)ctcp;
-(void)_handleCTCP:(id)ctcp asRequest:(BOOL)request fromSender:(id)sender forRoom:(id)room;
-(void)_handleJoinWithParameters:(id)parameters fromSender:(id)sender;
-(void)_handlePartWithParameters:(id)parameters fromSender:(id)sender;
-(void)_handleQuitWithParameters:(id)parameters fromSender:(id)sender;
-(void)_handleKickWithParameters:(id)parameters fromSender:(id)sender;
-(void)_handleTopic:(id)topic;
-(void)_handleTopicWithParameters:(id)parameters fromSender:(id)sender;
-(void)_parseRoomModes:(id)modes forRoom:(id)room fromSender:(id)sender;
-(void)_handleModeWithParameters:(id)parameters fromSender:(id)sender;
-(void)_handle324WithParameters:(id)parameters fromSender:(id)sender;
-(void)_handlePingWithParameters:(id)parameters fromSender:(id)sender;
-(void)_handleInviteWithParameters:(id)parameters fromSender:(id)sender;
-(void)_handleNickWithParameters:(id)parameters fromSender:(id)sender;
-(void)_handle303WithParameters:(id)parameters fromSender:(id)sender;
-(void)_handle301WithParameters:(id)parameters fromSender:(id)sender;
-(void)_handle305WithParameters:(id)parameters fromSender:(id)sender;
-(void)_handle306WithParameters:(id)parameters fromSender:(id)sender;
-(void)_handle353WithParameters:(id)parameters fromSender:(id)sender;
-(void)_handle366WithParameters:(id)parameters fromSender:(id)sender;
-(void)_handle352WithParameters:(id)parameters fromSender:(id)sender;
-(void)_handle315WithParameters:(id)parameters fromSender:(id)sender;
-(void)_handle322WithParameters:(id)parameters fromSender:(id)sender;
-(void)_handle367WithParameters:(id)parameters fromSender:(id)sender;
-(void)_handle368WithParameters:(id)parameters fromSender:(id)sender;
-(void)_handle332WithParameters:(id)parameters fromSender:(id)sender;
-(void)_handle333WithParameters:(id)parameters fromSender:(id)sender;
-(void)_handle311WithParameters:(id)parameters fromSender:(id)sender;
-(void)_handle312WithParameters:(id)parameters fromSender:(id)sender;
-(void)_handle313WithParameters:(id)parameters fromSender:(id)sender;
-(void)_handle317WithParameters:(id)parameters fromSender:(id)sender;
-(void)_handle318WithParameters:(id)parameters fromSender:(id)sender;
-(void)_handle319WithParameters:(id)parameters fromSender:(id)sender;
-(void)_handle320WithParameters:(id)parameters fromSender:(id)sender;
-(void)_handle401WithParameters:(id)parameters fromSender:(id)sender;
-(void)_handle402WithParameters:(id)parameters fromSender:(id)sender;
-(void)_handle421WithParameters:(id)parameters fromSender:(id)sender;
-(void)_handle475WithParameters:(id)parameters fromSender:(id)sender;
-(void)_handle604WithParameters:(id)parameters fromSender:(id)sender;
-(void)_handle600WithParameters:(id)parameters fromSender:(id)sender;
@end

@interface MVIRCChatConnection (MVIRCChatConnectionPrivate)
+(id)_flattenedIRCDataForMessage:(NSString*)message withEncoding:(unsigned)encoding andChatFormat:(int)format;
-(id)_chatConnection;
-(void)_connect;
-(void)disconn;
-(oneway void)_ircRunloop;
-(void)_didDisconnect;
-(BOOL)socketWillConnect:(id)socket;
-(void)socket:(id)socket willDisconnectWithError:(id)error;
-(void)socketDidDisconnect:(id)socket;
-(void)socket:(id)socket didConnectToHost:(id)host port:(unsigned short)port;
-(void)socket:(id)socket didReadData:(id)data withTag:(long)tag;
-(void)_writeDataToServer:(id)server;
-(void)_readNextMessageFromServer;
-(void)_sendMessage:(NSString*)message withEncoding:(unsigned)encoding toTarget:(id)target withAttributes:(id)attributes;
-(void)_updateKnownUser:(id)user withNewNickname:(id)newNickname;
-(void)_setCurrentNickname:(id)nickname;
-(void)_periodicEvents;
-(void)_pingServer;
-(void)_startSendQueue;
-(void)_stopSendQueue;
-(void)_resetSendQueueInterval;
-(void)_sendQueue;
-(void)_addDirectClientConnection:(id)connection;
-(void)_removeDirectClientConnection:(id)connection;
-(void)_resetSupportedFeatures;
-(void)_scheduleWhoisForUser:(id)user;
-(void)_whoisNextScheduledUser;
-(void)_whoisWatchedUsers;
-(void)_checkWatchedUsers;
-(id)_newStringWithBytes:(const char*)bytes length:(unsigned)length;
-(id)_stringFromPossibleData:(id)possibleData;
@end

