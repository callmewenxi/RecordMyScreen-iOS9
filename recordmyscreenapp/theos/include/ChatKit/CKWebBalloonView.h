/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "ChatKit-Structs.h"
#import "CKBalloonView.h"

@class UIWebDocumentView, DOMHTMLElement;

@interface CKWebBalloonView : CKBalloonView {
	UIWebDocumentView* _webLayer;
	DOMHTMLElement* _textElement;
}
+(BOOL)shouldHaveAccessoryDiclosure;
+(CGSize)defaultSize;
+(float)heightForText:(id)text width:(float)width includeBuffers:(BOOL)buffers;
-(instancetype)initWithFrame:(CGRect)frame delegate:(id)delegate;
-(void)dealloc;
-(void)setOrientation:(int)orientation;
-(void)setFrame:(CGRect)frame;
-(void)setMessagePart:(id)part;
-(void)setComposition:(id)composition;
-(void)setText:(id)text;
-(void)setDraws:(BOOL)draws;
-(id)text;
-(void)layoutSubviews;
-(void)setNeedsDisplay;
-(void)tighten;
-(void)cancelInteraction;
@end
