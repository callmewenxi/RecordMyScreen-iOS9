/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <UIKit/UITableViewCell.h>
#import "PhotoLibrary-Structs.h"

@class NSArray, MLPhoto, UITouch, NSIndexSet, UILongPressGestureRecognizer, NSMutableIndexSet, NSMutableArray;
@protocol PLThumbnailTableCellDelegate;

@interface PLThumbnailTableCell : UITableViewCell {
@private
	NSMutableArray* _slideImages;
	CGImageRef _cgImage;
	UITouch* _touchForTracking;
	NSIndexSet* _highlightedIndexesBeforeTracking;
	NSMutableIndexSet* _highlightedIndexes;
	NSMutableArray* _highlightedViews;
	int _thumbnailSelectionStyle;
	UILongPressGestureRecognizer* _recognizer;
	unsigned _canShowCopyCallout : 1;
	unsigned _canShowCutCallout : 1;
	unsigned _couldShowCopyCallout : 1;
	id<PLThumbnailTableCellDelegate> _delegate;
}
@property(assign, nonatomic) id<PLThumbnailTableCellDelegate> delegate;
@property(assign, nonatomic) BOOL canShowCutCallout;
@property(assign, nonatomic) BOOL canShowCopyCallout;
@property(readonly, assign, nonatomic) NSArray* selectedPhotos;
@property(readonly, assign, nonatomic) MLPhoto* selectedPhoto;
@property(copy, nonatomic) NSIndexSet* selectedPhotoIndexes;
@property(readonly, assign, nonatomic) NSArray* photos;
@property(assign, nonatomic) int thumbnailSelectionStyle;
// inherited: -(instancetype)initWithFrame:(CGRect)frame reuseIdentifier:(id)identifier;
// inherited: -(void)dealloc;
-(id)slideImageAtIndex:(unsigned)index;
-(void)setSlideImage:(id)image atIndex:(unsigned)index;
-(void)setImageRef:(CGImageRef)ref;
-(void)_selectionChanged:(id)changed wasSelected:(BOOL)selected;
// inherited: -(void)touchesBegan:(id)began withEvent:(id)event;
// inherited: -(void)touchesEnded:(id)ended withEvent:(id)event;
// inherited: -(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)setNeedsDisplay;
-(void)setNeedsDisplayInRect:(CGRect)rect;
// inherited: -(BOOL)_canDrawContent;
// inherited: -(void)setBackgroundColor:(id)color;
// inherited: -(void)prepareForReuse;
// inherited: -(void)setSelected:(BOOL)selected animated:(BOOL)animated;
-(void)addItemsToPasteboard;
-(void)copy:(id)copy;
-(void)cut:(id)cut;
// inherited: -(BOOL)canPerformAction:(SEL)action withSender:(id)sender;
-(void)_deselectAllImages;
-(void)_setSelected:(BOOL)selected;
-(int)_indexAtPoint:(CGPoint)point;
-(id)_updateSelectedColumnAtPoint:(CGPoint)point didSelectPhoto:(BOOL*)photo;
-(BOOL)_isMultipleSelectionEnabled;
// inherited: -(BOOL)canBecomeFirstResponder;
-(void)_longPressRecognized:(id)recognized;
-(void)_hideCopyCallout;
@end
