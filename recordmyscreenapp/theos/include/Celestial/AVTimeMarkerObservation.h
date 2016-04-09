/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface AVTimeMarkerObservation : NSObject {
	id _observer;
	NSArray* _times;
	id _context;
	int _currentIndex;
}
-(instancetype)initWithObserver:(id)observer times:(id)times context:(id)context currentIndex:(int)index;
-(void)dealloc;
-(BOOL)gotoTime:(double)time;
-(double)nextInterestingTime;
-(double)prevInterestingTime;
-(id)observer;
-(id)context;
-(int)currentIndex;
@end
