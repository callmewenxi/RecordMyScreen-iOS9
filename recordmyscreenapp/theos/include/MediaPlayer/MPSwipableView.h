/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIView.h>
#import "MediaPlayer-Structs.h"

@class MPActivityGestureRecognizer, MPTapGestureRecognizer, MPSwipeGestureRecognizer, UIPinchGestureRecognizer;
@protocol MPSwipableViewDelegate;

@interface MPSwipableView : UIView {
	int _enabledGestureTypes;
	id<MPSwipableViewDelegate> _swipeDelegate;
	MPTapGestureRecognizer* _tapGestureRecognizer;
	MPSwipeGestureRecognizer* _swipeGestureRecognizer;
	MPActivityGestureRecognizer* _activityGestureRecognizer;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
}
@property(assign, nonatomic) id<MPSwipableViewDelegate> swipeDelegate;
@property(assign, nonatomic) int enabledGestureTypes;
-(instancetype)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)_swipeGestureRecognized:(id)recognized;
-(void)_tapGestureRecognized:(id)recognized;
-(void)_activityGestureRecognized:(id)recognized;
-(void)_pinchGestureRecognized:(id)recognized;
-(BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
-(void)_updateGestureRecognizersForEnabledTypes;
@end

