/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface DAMessageMoveRequest : NSObject {
	NSString* _message;
	NSString* _fromFolder;
	NSString* _toFolder;
}
-(instancetype)initMoveRequestWithMessage:(id)message fromFolder:(id)folder toFolder:(id)folder3;
-(id)message;
-(id)fromFolder;
-(id)toFolder;
// inherited: -(void)dealloc;
@end
