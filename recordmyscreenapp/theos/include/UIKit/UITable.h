/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIScroller.h"
#import "UIKit-Structs.h"
#import "UITable.h"

@class NSMutableArray, UITableCountView, _UITableDeleteAnimationSupport, _UITableReorderingSupport, UIFloatArray;

@interface UITable : UIScroller {
	id _dataSource;
	NSMutableArray* _tableColumns;
	SEL _doubleAction;
	UIFloatArray* _rowHeights;
	NSRange _visibleRows;
	NSRange _visibleCols;
	NSMutableArray* _visibleCells;
	_UITableDeleteAnimationSupport* _deleteAnimationSupport;
	unsigned _selectedRow;
	unsigned _lastHighlightedRow;
	int _rowCount;
	int _tableReloadingSuspendedCount;
	float _padding;
	UIView* _accessoryView;
	UITableCountView* _countLabel;
	NSMutableArray* _reusableTableCells;
	int _reusableCapacity;
	NSMutableArray* _extraSeparators;
	int _swipeToDeleteRow;
	struct {
		unsigned separatorStyle : 3;
		unsigned rowDeletionEnabled : 1;
		unsigned allowSelectionDuringRowDeletion : 1;
		unsigned dataSourceHeightForRow : 1;
		unsigned dataSourceSetObjectValue : 1;
		unsigned dataShowDisclosureForRow : 1;
		unsigned dataDisclosureClickableForRow : 1;
		unsigned dataSourceWantsHints : 1;
		unsigned dataSourceCanDeleteRow : 1;
		unsigned dataSourceConfirmDeleteRow : 1;
		unsigned delegateTableSelectionDidChange : 1;
		unsigned scrollsToSelection : 1;
		unsigned reloadSkippedDuringSuspension : 1;
		unsigned reuseTableCells : 1;
		unsigned delegateUpdateVisibleCellsNote : 1;
		unsigned delegateTableRowSelected : 1;
		unsigned rowAlreadyHighlighted : 1;
		unsigned needsReload : 1;
		unsigned delegateCanSwipe : 1;
		unsigned updatingVisibleCellsManually : 1;
		unsigned scheduledUpdateVisibleCells : 1;
		unsigned warnForForcedCellUpdateDisabled : 1;
		unsigned delaySendingSelectionChanged : 1;
		unsigned dataSourceCanInsertAtRow : 1;
		unsigned shouldDisplayTopSeparator : 1;
		unsigned displayTopSeparator : 1;
		unsigned needToAdjustExtraSeparators : 1;
		unsigned ignoreDragSwipe : 1;
		unsigned lastHighlightedRowActive : 1;
		unsigned reloading : 1;
		unsigned countStringInsignificantRowCount : 4;
		unsigned dataSourceCanReuseCell : 1;
		unsigned reserved : 27;
	} _tableFlags;
	_UITableReorderingSupport* _reorderingSupport;
}
-(instancetype)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(BOOL)validateDataSource;
-(void)setDataSource:(id)source;
-(id)dataSource;
-(void)setDelegate:(id)delegate;
-(id)tableColumns;
-(int)numberOfColumns;
-(int)dataSourceGetRowCount;
-(BOOL)dataSourceSupportsVariableRowHeights;
-(int)numberOfRows;
-(void)addTableColumn:(id)column;
-(void)removeTableColumn:(id)column;
-(int)columnWithIdentifier:(id)identifier;
-(id)tableColumnWithIdentifier:(id)identifier;
-(void)setRowHeight:(float)height;
-(float)rowHeight;
-(void)scrollRowToVisible:(int)visible;
-(void)clearAllData;
-(void)_updateOriginOfCells:(NSRange)cells;
-(void)reloadDataForInsertionOfRows:(NSRange)rows;
-(void)reloadCellAtRow:(int)row column:(int)column animated:(BOOL)animated;
-(float)animationDuration;
-(void)reloadDataForInsertionOfRows:(NSRange)rows animated:(BOOL)animated;
-(void)reloadData;
-(void)noteNumberOfRowsChanged;
-(void)setNeedsDisplayInRowRange:(NSRange)rowRange;
-(void)setDoubleAction:(SEL)action;
-(SEL)doubleAction;
-(void)setCountStringInsignificantRowCount:(unsigned)count;
-(void)setCountString:(id)string;
-(void)animateDeletionOfCellAtRow:(int)row column:(int)column viaEdge:(int)edge;
-(void)animateDeletionOfRowWithCell:(id)cell viaEdge:(int)edge animatingOthersUp:(BOOL)up;
-(void)animateDeletionOfRowWithCell:(id)cell viaEdge:(int)edge;
-(void)animateDeletionOfRowWithCell:(id)cell;
-(void)completeRowDeletionAnimation;
-(BOOL)canDeleteRow:(int)row;
-(BOOL)canInsertAtRow:(int)row;
-(void)enableRowDeletion:(BOOL)deletion;
-(BOOL)_userCanDeleteRows;
-(void)_enableRowDeletion:(BOOL)deletion forCell:(id)cell atRow:(int)row allowInsert:(BOOL)insert allowReorder:(BOOL)reorder animated:(BOOL)animated;
-(int)deleteConfirmationRow;
-(void)setDeleteConfirmationRow:(int)row;
-(void)removeControlWillHideRemoveConfirmation:(id)removeControl;
-(void)enableRowDeletion:(BOOL)deletion animated:(BOOL)animated;
-(void)_removeContextFromSuperview:(id)superview finished:(id)finished context:(id)context;
-(void)_disableInteraction;
-(void)_enableInteraction;
-(BOOL)isRowDeletionEnabled;
-(void)setAllowSelectionDuringRowDeletion:(BOOL)deletion;
-(void)updateDisclosures;
-(CGRect)frameOfCellAtRow:(int)row column:(int)column;
-(CGRect)frameOfCellAtColumn:(int)column row:(int)row;
-(CGRect)rectOfViewAtColumn:(int)column row:(int)row;
-(id)viewAtColumn:(int)column row:(int)row;
-(id)cellAtRow:(int)row column:(int)column;
-(void)setAllowsReordering:(BOOL)reordering;
-(id)dataSourceCreateCellForRow:(int)row column:(int)column reusing:(id)reusing;
-(BOOL)shouldIndentRow:(int)row;
-(id)_resuableObjectForTableCell:(id)tableCell;
-(id)createPreparedCellForRow:(int)row column:(int)column;
-(CGRect)rectOfColumn:(int)column;
-(CGRect)_rectOfRow:(int)row usingRowHeights:(id)heights;
-(CGRect)rectOfRow:(int)row;
-(NSRange)columnsInRect:(CGRect)rect;
-(NSRange)rowsInRect:(CGRect)rect;
-(int)columnAtPoint:(CGPoint)point;
-(int)rowAtPoint:(CGPoint)point;
-(id)visibleCellsWithoutUpdatingLayout;
-(id)visibleCells;
-(id)visibleCellForRow:(int)row column:(int)column;
-(BOOL)getRow:(int*)row column:(int*)column ofTableCell:(id)tableCell;
-(NSRange)visibleRowsInRect:(CGRect)rect;
-(void)setOffset:(CGPoint)offset;
-(void)setFrame:(CGRect)frame;
-(void)_userSelectRow:(int)row;
-(void)selectRow:(int)row byExtendingSelection:(BOOL)selection;
-(void)_sendSelectionDidChange;
-(void)_delaySendSelectionDidChange;
-(void)removeFromSuperview;
-(BOOL)cancelMouseTracking;
-(BOOL)cancelTouchTracking;
-(void)selectCell:(id)cell inRow:(int)row column:(int)column withFade:(BOOL)fade;
-(void)_selectRow:(int)row byExtendingSelection:(BOOL)selection withFade:(BOOL)fade scrollingToVisible:(BOOL)visible withSelectionNotifications:(BOOL)selectionNotifications;
-(void)selectRow:(int)row byExtendingSelection:(BOOL)selection withFade:(BOOL)fade scrollingToVisible:(BOOL)visible;
-(void)selectRow:(int)row byExtendingSelection:(BOOL)selection withFade:(BOOL)fade;
-(BOOL)shouldDelaySendingSelectionChanged;
-(int)selectedRow;
-(int)lastHighlightedRow;
-(BOOL)highlightRow:(int)row;
-(BOOL)highlightNextRowByDelta:(int)delta;
-(BOOL)selectHighlightedRow;
-(void)setScrollsToSelection:(BOOL)selection;
-(void)setSeparatorStyle:(int)style;
-(int)separatorStyle;
-(void)setPadding:(float)padding;
-(UIEdgeInsets)adornmentMargins;
-(UIEdgeInsets)pressedAdornmentMargins;
-(id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(BOOL)canSelectRow:(int)row;
-(BOOL)_checkCanSelectRow:(int)row view:(id)view;
-(void)contentMouseUpInView:(id)view withEvent:(GSEventRef)event;
-(void)highlightView:(id)view state:(BOOL)state;
-(void)setAccessoryView:(id)view;
-(id)accessoryView;
-(void)drawExtraSeparator:(CGRect)separator;
-(void)setResusesTableCells:(BOOL)cells;
-(void)setReusesTableCells:(BOOL)cells;
-(void)scrollAndCenterTableCell:(id)cell animated:(BOOL)animated;
-(void)_updateContentSize;
-(BOOL)floatArray:(id)array loadValues:(float*)values count:(int)count;
-(void)floatArray:(id)array getValueCount:(int*)count gapIndexCount:(int*)count3;
-(void)_reloadRowHeights;
-(void)_addSubview:(id)subview atTop:(BOOL)top;
-(void)layoutSubviews;
-(void)_stopAutoscrollTimer;
-(void)_beginReorderingForCell:(id)cell;
-(void)_autoscroll:(id)autoscroll;
-(void)_reorderPositionChangedForCell:(id)cell;
-(void)_finishedAnimatingCellReorder:(id)reorder finished:(id)finished context:(id)context;
-(void)_endCellReorderAnimation;
-(void)_tableCellAnimationDidStop:(id)_tableCellAnimation finished:(id)finished;
-(void)_endReorderingForCell:(id)cell;
-(void)_setNeedsVisibleCellsUpdate:(BOOL)update;
-(BOOL)canHandleSwipes;
-(int)swipe:(int)swipe withEvent:(GSEventRef)event;
-(void)_updateVisibleCellsNow;
-(void)_updateVisibleCellsImmediatelyIfNecessary;
-(void)_suspendReloads;
-(void)_resumeReloads;
-(int)_rowForTableCell:(id)tableCell;
-(void)_deleteRowAlertDidEndWithResult:(BOOL)_deleteRowAlert contextInfo:(id)info;
-(void)_deleteRowAlertDidEndContinuation:(id)_deleteRowAlert;
-(BOOL)_shouldDeleteRowForTableCell:(id)tableCell;
-(void)_animateRowsForDeletionOfRow:(int)row withSep:(id)sep;
-(void)_saveTableStateBeforeAnimationForRow:(int)row;
-(void)_restoreTableStateAfterAnimation;
-(int)_removeFromVisibleRows:(id)visibleRows;
-(void)_getRowCount:(int*)count andHeight:(float*)height beforeVisibleCellsForRows:(id)rows;
-(void)_animateRemovalOfCell:(id)cell atRow:(int)row col:(int)col viaEdge:(int)edge withAmountToSlideUp:(float*)slideUp;
-(void)_animateRemovalOfVisibleRows:(id)visibleRows viaEdge:(int)edge withAmountToSlideUp:(float*)slideUp;
-(void)_animateNewCells:(id)cells bySlidingUpAmount:(float)amount;
-(void)_animateNewCells:(id)cells bySlidingDownAmount:(float)amount;
-(float)_partOfRow:(int)row thatIsHidden:(BOOL)hidden;
-(void)deleteRows:(id)rows viaEdge:(int)edge animated:(BOOL)animated;
-(void)deleteRows:(id)rows viaEdge:(int)edge;
-(void)_fadeCellOutAnimationDidStop:(id)_fadeCellOutAnimation finished:(id)finished context:(id)context;
-(void)insertRows:(id)rows deleteRows:(id)rows2 reloadRows:(id)rows3;
-(void)_willDeleteRow:(int)row forTableCell:(id)tableCell viaEdge:(int)edge animateOthers:(BOOL)others;
-(void)_enableAndRestoreTableStateAfterAnimation;
-(void)_finishedRemovingRemovalButtonForTableCell:(id)tableCell;
-(void)_didDeleteRowForTableCell:(id)tableCell;
-(void)_didInsertRowForTableCell:(id)tableCell;
-(void)mouseDown:(GSEventRef)down;
-(void)mouseDragged:(GSEventRef)dragged;
-(BOOL)_shouldTryPromoteDescendantToFirstResponder;
-(void)_scheduleAdjustExtraSeparators;
-(void)_adjustExtraSeparators;
-(unsigned)_countStringRowCount;
-(void)_setRowCount:(int)count;
-(void)_adjustCountLabel;
-(void)_adjustReusableTableCells;
@end

@interface UITable (SyntheticEvents)
-(id)_scriptingInfo;
@end

