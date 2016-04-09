/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "Message-Structs.h"
#import <MIME/WRObject.h>

@class NSMutableArray, NSFileHandle, IMAPAccount;

@interface IMAPOperationCache : WRObject {
	IMAPAccount* _account;
	NSFileHandle* _handle;
	NSMutableArray* _ops;
	unsigned _lastUid;
	unsigned _lastSave;
	unsigned _lastUidValidity;
}
-(instancetype)initWithIMAPAccount:(id)imapaccount;
// inherited: -(void)dealloc;
-(id)account;
-(void)_queueDeferredOperation:(id)operation;
-(void)createMailbox:(id)mailbox;
-(void)deleteMailbox:(id)mailbox;
-(void)setFlags:(id)flags andClearFlags:(id)flags2 forMessages:(id)messages;
-(void)setFlags:(id)flags andClearFlags:(id)flags2 forUids:(id)uids forMailbox:(id)mailbox;
-(unsigned)firstUidForCopyingMessages:(id)copyingMessages fromMailbox:(id)mailbox toMailbox:(id)mailbox3;
-(unsigned)uidForAppendingMessageData:(id)appendingMessageData withFlags:(id)flags andInternalDate:(id)date toMailbox:(id)mailbox;
-(void)expungeTemporaryUid:(unsigned)uid;
-(void)saveChanges;
-(unsigned)numberOfPendingChanges;
-(BOOL)hasOperationsForMailbox:(id)mailbox;
-(BOOL)connection:(id)connection shouldHandleUntaggedResponse:(id)response forCommand:(XXStruct_rpKdCA*)command;
-(void)_performCreateOperation:(id)operation withContext:(XXStruct_FzAmJD*)context;
-(void)_performDeleteOperation:(id)operation withContext:(XXStruct_FzAmJD*)context;
-(void)_performStoreOperation:(id)operation withContext:(XXStruct_FzAmJD*)context;
-(void)_performAppendOperation:(id)operation withContext:(XXStruct_FzAmJD*)context;
-(void)_performCopyOperation:(id)operation withContext:(XXStruct_FzAmJD*)context;
-(void)performDeferredOperationsWithConnection:(id)connection;
-(id)deferredOperations;
@end
