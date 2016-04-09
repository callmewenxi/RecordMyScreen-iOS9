/**
 * This header is generated by class-dump-z 0.1-11s.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "PSRootController.h"

@class NSDictionary;

@interface PSSetupController : PSRootController {
	NSDictionary* _rootInfo;
	id<PSBaseView> _parentController;
}
// inherited: +(BOOL)isOverlay;
// inherited: -(void)setupRootListForSize:(CGSize)size;
// inherited: -(instancetype)initForContentSize:(CGSize)contentSize;
// inherited: -(void)dealloc;
// inherited: -(id)view;
// inherited: -(id)parentController;
// inherited: -(void)viewWillBecomeVisible:(void*)view;
-(void)didFinishTransition;
// inherited: -(void)pushController:(id)controller;
// inherited: -(void)setParentController:(id)controller;
-(id)controller;
-(void)dismiss;
-(void)pushControllerOnParentWithSpecifier:(id)specifier;
-(void)popControllerOnParent;
// inherited: -(void)navigationBar:(id)bar buttonClicked:(int)clicked;
// inherited: -(void)updateNavButtons;
// inherited: -(void)showNavigationBarButtons:(id)buttons :(id)arg2;
// inherited: -(void)setPrompt:(id)prompt;
// inherited: -(id)methodSignatureForSelector:(SEL)selector;
// inherited: -(void)forwardInvocation:(id)invocation;
@end
