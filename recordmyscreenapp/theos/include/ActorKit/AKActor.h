/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "AKActor.h"
#import <Foundation/NSObject.h>

@class AKMailbox, AKDeferredReply, AKDispatchQueue;

@protocol AKActor
-(AKMailbox*)send;
-(AKMailbox*)mailbox;
@end

@interface AKActor : NSObject <AKActor> {
	AKMailbox* _mailbox;
}
-(instancetype)init;
-(void)dealloc;

/// Returns the mailbox.
-(id)send;

-(AKMailbox*)mailbox;
-(AKDeferredReply*)deferredReply;

-(AKDispatchQueue*)startMigrantDispatchQueue;
-(AKDispatchQueue*)startThreadDispatchQueue;
@end
